using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OreSpawner : MonoBehaviour
{
    public Mineable[] ores;

    public static int blockSpawnedCount;

    public Vector2 cooldownRandom;

    public float GetRandX(Mineable ore)
    {
        //return UnityEngine.Random.Range(0, 2) == 1 ? UnityEngine.Random.Range(ore.boundsX.x, ore.boundsX.y) : -UnityEngine.Random.Range(ore.boundsX.x, ore.boundsX.y);
        return UnityEngine.Random.Range(-1000, 1000);
    }

    public float GetRandY(Mineable ore)
    {
        //return UnityEngine.Random.Range(0, 2) == 1 ? UnityEngine.Random.Range(ore.boundsY.x, ore.boundsY.y) : -UnityEngine.Random.Range(ore.boundsY.x, ore.boundsY.y);
        return UnityEngine.Random.Range(-1000, 1000);
    }

    void Update()
    {
        if (blockSpawnedCount >= 1000)
        {
            return;
        }
        float rand = UnityEngine.Random.Range(0f, 100.01f);
        foreach (Mineable anOre in ores)
        {
            if (rand <= anOre.randomRange.y && rand >= anOre.randomRange.x)
            {
                Instantiate(anOre.gameObject, new Vector3(GetRandX(anOre), -4f, GetRandY(anOre)), Quaternion.identity);
                break;
            }
            else if (rand > 93.55)
            {
                Instantiate(ores[0].gameObject, new Vector3(GetRandX(ores[0]), -4f, GetRandY(ores[0])), Quaternion.identity);
                break;
            }
        }
        blockSpawnedCount++;
    }
}
