using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mineable : MonoBehaviour
{
    public float health, experienceDrop;

    [HideInInspector] public float maxHealth;

    public Resource resource;

    public Vector2 boundsX, boundsY;

    public Vector2 randomRange;
    
    public void Destroy()
    {
        Healthbar.instance.DestroyMineable();
        GetComponent<Animation>().Play("Destroy");
        PlayerPrefs.SetInt("Resource" + (int)resource, PlayerPrefs.GetInt("Resource" + (int)resource) + PickaxeData.CurrentPickaxe.BlockDrop);
        AudioController.PlayRandomAudio(AudioController.instance.breakRock);
        OreSpawner.blockSpawnedCount--;
        ExperienceController.CurrentExperience += experienceDrop;
    }

    void Start()
    {
        maxHealth = health;
        StartCoroutine(Rise());
    }

    private IEnumerator Rise()
    {
        while (transform.localPosition.y < 0.2f)
        {
            yield return null;
            transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y + 2f * Time.deltaTime, transform.localPosition.z);
        }
    }

    public void DestroyObject()
    {
        Destroy(gameObject);
    }

    public void Hit(float damage)
    {
        health -= damage;
        if (health <= 0f)
        {
            Destroy();
            return;
        }
        Healthbar.instance.ChangeMineable(this);
    }
}

public enum Resource
{
    Stone, Coal, Iron, Gold, Amethyst, Ruby, Emerald, Sapphire, Diamond, RGB, Void, Antimatter, UltraMatter
}
