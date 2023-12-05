using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;

public class Teleport1 : MonoBehaviour
{
    public float x;
    public float y;
    public float z;
    public bool currentPos;
    public AudioClip AmbienceMusic;
    public AudioClip BossMusic;
    private AudioSource bgmusic;
    public GameObject BossSpawn;
    public float TimeToSpawn;
    public Vector3 BossPos;
    public bool SpawnToSpawnBox = false;
    public GameObject SpawnBox = null;
    public bool ChangeFog;
    public Color fogColor;
    public float fogDensity;
    public bool ChangeSkybox;
    public Color AmbientColor;
    public Color SkyboxColor;
    public Material ChangeToSkybox = null;
    public bool ChangeGrading;
    public Color ColorGradingColor;
    public bool ChangeLight;
    public Color DirectionalLightColor;
    public float DirectionalLightIntensity;
    public float DirectionalLightRange;
    public GameObject ArenaEnable;
    private Transform maincamera = null;

    void Start()
    {
        GameObject gamebgm = GameObject.FindGameObjectWithTag("BGM");
        bgmusic = gamebgm.GetComponent<AudioSource>();
    }
    private void OnTriggerEnter(Collider other) 
    {
        if (other.tag == "Player" && currentPos == true && SpawnToSpawnBox == false)
        {
        other.transform.position = new Vector3(transform.position.x + x,transform.position.y + y,transform.position.z + z);
        Debug.LogError("Teleported1");
        TeleportControl(other);
        }
        else if (other.tag == "Player" && currentPos == false && SpawnToSpawnBox == false)
        {
        other.transform.position = new Vector3(x,y,z);
        Debug.LogError("Teleported2");
        TeleportControl(other);
        }
        else if (other.tag == "Player" && SpawnToSpawnBox == true)
        {
        other.transform.position = SpawnBox.transform.position;
        TeleportControl(other);
        }
    }
    void TeleportControl(Collider player)
    {
        ArenaEnable.SetActive(true);
        bgmusic.Stop();
        bgmusic.clip = AmbienceMusic;
        bgmusic.Play();
        if (ChangeFog == true)
        {
            RenderSettings.fogColor = fogColor;
            RenderSettings.fogDensity = fogDensity;
        }
        if (ChangeGrading == true)
        {
            Transform peekpivot = player.transform.Find("PeekPivot");
            if (peekpivot.transform.Find("Main Camera"))
            {
            maincamera = peekpivot.transform.Find("Main Camera");
            }
            else
            {
            maincamera = player.transform.Find("Main Camera");
            }
            PostProcessVolume postprocessvolume = maincamera.GetComponent<PostProcessVolume>();
            Bloom _bl;
            ColorGrading _cg;
            // postprocessvolume.profile.TryGetSettings(out _bl);
            postprocessvolume.profile.TryGetSettings(out _cg);
            //_bl.color.value = Phase1Color;
            _cg.colorFilter.value = ColorGradingColor;
        }
        if (ChangeLight == true)
        {
            GameObject _dl = GameObject.Find("Directional light");
            _dl.GetComponent<Light>().color = DirectionalLightColor;
            _dl.GetComponent<Light>().intensity = DirectionalLightIntensity;
            _dl.GetComponent<Light>().range = DirectionalLightRange;
        }
        if (ChangeSkybox == true)
        {
            RenderSettings.skybox = ChangeToSkybox;
        }
        StartCoroutine(SpawnBoss());
    }
    private IEnumerator SpawnBoss()
    {
        yield return new WaitForSeconds(TimeToSpawn);
        Instantiate(BossSpawn, BossPos, Quaternion.identity);
        bgmusic.Stop();
        bgmusic.clip = BossMusic;
        bgmusic.Play();
    }
}
