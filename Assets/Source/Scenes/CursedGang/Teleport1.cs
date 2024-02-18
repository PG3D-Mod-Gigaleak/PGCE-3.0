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
    public GameObject PickupsPoint;
    public GameObject Pickups;
    public float PickupsZoneScale;

    void Start()
    {
        GameObject gamebgm = GameObject.FindGameObjectWithTag("BGM");
        bgmusic = gamebgm.GetComponent<AudioSource>();
    }
    private void OnTriggerEnter(Collider other) 
    {
        if (other.tag == "Player" && currentPos == true && SpawnToSpawnBox == false)
        {
            GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject others in players)
            {
                others.transform.position = new Vector3(transform.position.x + x,transform.position.y + y,transform.position.z + z);
            }
            TeleportControl(other);
        }
        else if (other.tag == "Player" && currentPos == false && SpawnToSpawnBox == false)
        {
            GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject others in players)
            {
        others.transform.position = new Vector3(x,y,z);
            }
        TeleportControl(other);
        }
        else if (other.tag == "Player" && SpawnToSpawnBox == true)
        {
            GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject others in players)
            {
        others.transform.position = SpawnBox.transform.position;
            }
        TeleportControl(other);
        }
    }
    void TeleportControl(Collider player)
    {
        if (ArenaEnable != null)
        {
            ArenaEnable.SetActive(true);
            if (AmbienceMusic != null)
            {
                bgmusic.Stop();
                bgmusic.clip = AmbienceMusic;
                bgmusic.Play();
            }
        }
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
        if (Pickups != null && PickupsPoint != null)
        {
            Pickups.transform.position = PickupsPoint.transform.position;
            if (PickupsZoneScale != 0)
            {
                Pickups.transform.localScale = new Vector3(Pickups.transform.localScale.x * PickupsZoneScale,Pickups.transform.localScale.y, Pickups.transform.localScale.z * PickupsZoneScale);
            }
            GameObject[] bonuses = GameObject.FindGameObjectsWithTag("Bonus");
            foreach (GameObject bonus in bonuses)
            {
                Destroy(bonus);
            }
        }
        if (BossSpawn != null)
        {
        StartCoroutine(SpawnBoss());
        }
    }
    private IEnumerator SpawnBoss()
    {
        yield return new WaitForSeconds(TimeToSpawn);
        PhotonNetwork.Instantiate(LoadBoss(BossSpawn), BossPos, Quaternion.identity,0);
        bgmusic.Stop();
        bgmusic.clip = BossMusic;
        bgmusic.Play();
    }

    string LoadBoss(GameObject BossSpawn)
    {
        string bossname = BossSpawn.name;
        return bossname.StartsWith("Enemy") ? "enemies/" + bossname : "bosses/" + bossname;
    }
}
