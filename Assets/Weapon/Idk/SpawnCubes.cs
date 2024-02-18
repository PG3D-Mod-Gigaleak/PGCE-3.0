using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SpawnCubes : MonoBehaviour
{
    [Header("Objects")]
    public GameObject Prefab;
    public GameObject User;

    [Header("Conditions")]
    public bool hasUser = false;
    public bool isRandom = false;
    public bool isForward = false;
    public bool onlyHorizontal = false;
    public float lastSpawnedtime;
    public float frequency;

    [Header("Vectors")]
    public Vector3 positionObject;
    public Vector3 rotationObject;
    public Vector3 scaleObject;

    [Header("Vector adjusters")]
    public float distance;
    public Vector3 distancePosition;
    public Vector3 distanceRotation;
    public Vector3 distanceScale;

    [Header("Range")]

    public float x1;
    public float x2;
    public float y1;
    public float y2;
    public float z1;
    public float z2;

    public void spawnage()
    {
        if (hasUser == true && onlyHorizontal == false && isRandom == false)
        {
            Vector3 forwardPos = transform.position + positionObject + transform.forward*distance;
            Vector3 forwardRot = User.transform.rotation.eulerAngles + distanceRotation;
            Debug.LogError("Spawned1");
            GameObject cube = PhotonNetwork.Instantiate(LoadObject(Prefab), forwardPos, Quaternion.identity,0);
            cube.transform.localEulerAngles = forwardRot;
        }
        else if (hasUser == true && onlyHorizontal == true && isRandom == false)
        {
            Vector3 forwardPosFixed = transform.position + distancePosition*distance;
            Vector3 forwardRot = User.transform.rotation.eulerAngles + distanceRotation;
            Debug.LogError("Spawned2");
            GameObject cube = PhotonNetwork.Instantiate(LoadObject(Prefab), forwardPosFixed, Quaternion.identity,0);
            cube.transform.localEulerAngles = forwardRot;
        }
        else if (hasUser == false && onlyHorizontal == false && isRandom == false)
        {
            Vector3 forwardPos = transform.position + positionObject + transform.forward*distance;
            Quaternion forwardRot = User.transform.rotation;
            Debug.LogError("Spawned3");
            PhotonNetwork.Instantiate(LoadObject(Prefab), forwardPos, Quaternion.Euler(rotationObject),0);
        
        }
        else if (hasUser == false && onlyHorizontal == true && isRandom == false)
        {
            Vector3 forwardPosFixed = transform.position + distancePosition*distance;
            Quaternion forwardRot = User.transform.rotation;
            Debug.LogError("Spawned4");
            PhotonNetwork.Instantiate(LoadObject(Prefab), forwardPosFixed, Quaternion.Euler(rotationObject),0);
            }
        else if (isRandom == true)
        {
            float rangeX = Random.Range(x1,x2);
            float rangeY = Random.Range(y1,y2);
            float rangeZ = Random.Range(z1,z2);
            Vector3 randomPos = new Vector3(rangeX,rangeY,rangeZ);
            Vector3 finalPos = transform.position + randomPos;
            Quaternion forwardRot = User.transform.rotation;
            Debug.LogError("Spawned5");
            PhotonNetwork.Instantiate(LoadObject(Prefab), finalPos, Quaternion.Euler(rotationObject),0);
        }

        string LoadObject(GameObject Object)
        {
            GameObject checkPrefab = Object;
            checkPrefab.TryGetComponent<PhotonView>(out PhotonView _pv);
            if (!_pv)
            {
                checkPrefab.AddComponent<PhotonView>();
            }
            string ObjectName = Object.name;
            return ObjectName.StartsWith("Enemy") ? "Instantiatables/enemyobjects/" + ObjectName : "Instantiatables/playerobjects/" + ObjectName;
        }
    }
    void Update() {
        if (Time.time > lastSpawnedtime + frequency)
        {
            lastSpawnedtime = Time.time;
            spawnage();
        }
    }
}
