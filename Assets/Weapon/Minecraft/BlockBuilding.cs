using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockBuilding : MonoBehaviour
{
    public bool isBlock;
    public bool isPlace;
    public bool isRemove;
    public bool isRemodel;
    public Material Dirt;
    public Material Grass;
    public Material Stone;
    public Material Cobblestone;
    public Material Plank;
    public Material Lamp;
    public Material Wood;
    public Material PlaceHammer;
    public Material RemoveHammer;
    public Material RemodelHammer;
    public float BlockSize;
    public Vector2 GridArea;
    public GameObject GridBlock;
    public GameObject DeleteGrid;
    public GameObject RemodelGrid;
    public GameObject TemplateBlock;
    private Ray toolray;
    public GameObject host;
    private GameObject player;
    private Camera maincamera;
    public float RayDistance;
    private RaycastHit blockside;
    private bool Sidestuck;
    public GameObject[] blocksides;
    private float distancetopoint;
    private GameObject SelectBlock;
    public GameObject hammer;

    void FixedUpdate()
    {
        player = host.transform.parent.parent.parent.gameObject;
        if (player.transform.Find("PeekPivot").transform.Find("Main Camera"))
        {
            maincamera = player.transform.Find("PeekPivot").transform.Find("Main Camera").GetComponent<Camera>();
        }
        else
        {
            maincamera = player.transform.Find("Main Camera").GetComponent<Camera>();
        }
        toolray = maincamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(toolray, out blockside))
        {
            Physics.Raycast(toolray, out blockside);
            if (Vector3.Distance(player.transform.position, blockside.point) < 5f && isPlace)
            {
                Debug.LogError("Vector3");
                blocksides = GameObject.FindGameObjectsWithTag("Block");
                distancetopoint = 5f;
                SelectBlock = null;
                foreach (GameObject side in blocksides)
                {
                    if (Vector3.Distance(side.transform.position,blockside.point) < distancetopoint && Vector3.Distance(side.transform.position,player.transform.position) < 5f)
                    {
                        distancetopoint = Vector3.Distance(side.transform.position,blockside.point);
                        SelectBlock = side;
                    }
                }
                Debug.LogError("is Blockside");
                GameObject TemporaryBlock = Instantiate(GridBlock, SelectBlock.transform.parent.position + new Vector3(0f,1.5f,0f), Quaternion.identity);
                StartCoroutine(TemporaryGrid(TemporaryBlock));
            }
            else if (Vector3.Distance(player.transform.position, blockside.point) < 5f && isRemove)
            {
                Debug.LogError("Vector3");
                blocksides = GameObject.FindGameObjectsWithTag("Block");
                distancetopoint = 5f;
                SelectBlock = null;
                foreach (GameObject block in blocksides)
                {
                    if (Vector3.Distance(block.transform.position,blockside.point) < distancetopoint && Vector3.Distance(block.transform.position,player.transform.position) < 5f)
                    {
                        distancetopoint = Vector3.Distance(block.transform.position,blockside.point);
                        SelectBlock = block;
                    }
                }
                GameObject TemporaryBlock = Instantiate(DeleteGrid, SelectBlock.transform.parent.position + new Vector3(0f,0,0f), Quaternion.identity);
                TemporaryBlock.transform.localScale = new Vector3(TemporaryBlock.transform.localScale.x * 1.2f,TemporaryBlock.transform.localScale.y * 1.2f,TemporaryBlock.transform.localScale.z * 1.2f);
                StartCoroutine(TemporaryGrid(TemporaryBlock));
            }
            else if (Vector3.Distance(player.transform.position, blockside.point) < 5f && isRemodel)
            {
                Debug.LogError("Vector3");
                blocksides = GameObject.FindGameObjectsWithTag("Block");
                distancetopoint = 5f;
                SelectBlock = null;
                foreach (GameObject block in blocksides)
                {
                    if (Vector3.Distance(block.transform.position,blockside.point) < distancetopoint && Vector3.Distance(block.transform.position,player.transform.position) < 5f)
                    {
                        distancetopoint = Vector3.Distance(block.transform.position,blockside.point);
                        SelectBlock = block;
                    }
                }
                GameObject TemporaryBlock = Instantiate(RemodelGrid, SelectBlock.transform.parent.position + new Vector3(0f,0,0f), Quaternion.identity);
                TemporaryBlock.transform.localScale = new Vector3(TemporaryBlock.transform.localScale.x * 1.2f,TemporaryBlock.transform.localScale.y * 1.2f,TemporaryBlock.transform.localScale.z * 1.2f);
                StartCoroutine(TemporaryGrid(TemporaryBlock));
            }
        }
    }

    public void SwitchMode()
    {
        if (isPlace && !isRemodel && !isRemove)
        {
            isPlace = false;
            isRemove = true;
            hammer.GetComponent<Renderer>().material = RemoveHammer;

        }
        else if (!isPlace && !isRemodel && isRemove)
        {
            isRemove = false;
            isRemodel = true;
            hammer.GetComponent<Renderer>().material = RemodelHammer;
        }
        else if (!isPlace && isRemodel && !isRemove)
        {
            isRemodel = false;
            isPlace = true;
            hammer.GetComponent<Renderer>().material = PlaceHammer;
        }
    }

    public void Action()
    {
            player = host.transform.parent.parent.parent.gameObject;
            if (player.transform.Find("PeekPivot").transform.Find("Main Camera"))
            {
                maincamera = player.transform.Find("PeekPivot").transform.Find("Main Camera").GetComponent<Camera>();
            }
            else
            {
                maincamera = player.transform.Find("Main Camera").GetComponent<Camera>();
            }
            toolray = maincamera.ScreenPointToRay(Input.mousePosition);
            Physics.Raycast(toolray, out blockside);
            if (Vector3.Distance(player.transform.position, blockside.point) < 5f && isPlace)
            {
                Debug.LogError("Vector3 placing");
                blocksides = GameObject.FindGameObjectsWithTag("Block");
                distancetopoint = 5f;
                SelectBlock = null;
                foreach (GameObject side in blocksides)
                {
                    if (Vector3.Distance(side.transform.position,blockside.point) < distancetopoint && Vector3.Distance(side.transform.position,player.transform.position) < 5f)
                    {
                        distancetopoint = Vector3.Distance(side.transform.position,blockside.point);
                        SelectBlock = side;
                    }
                }
                Debug.LogError("Vector3 placed");
                if (SelectBlock != null)
                {
                GameObject TemmplateBlock = Instantiate(TemplateBlock, SelectBlock.transform.parent.position + new Vector3(0f,1.5f,0f), Quaternion.identity);
                }
            }
            else if (Vector3.Distance(player.transform.position, blockside.point) < 5f && isRemove)
            {
                Debug.LogError("Vector3 removing");
                blocksides = GameObject.FindGameObjectsWithTag("Block");
                distancetopoint = 5f;
                SelectBlock = null;
                foreach (GameObject side in blocksides)
                {
                    if (Vector3.Distance(side.transform.position,blockside.point) < distancetopoint && Vector3.Distance(side.transform.position,player.transform.position) < 5f)
                    {
                        distancetopoint = Vector3.Distance(side.transform.position,blockside.point);
                        SelectBlock = side;
                    }
                }
                Debug.LogError("Vector3 removed");
                if (SelectBlock != null)
                {
                Destroy(SelectBlock.transform.parent.gameObject);
                }
            }
            else if (Vector3.Distance(player.transform.position, blockside.point) < 5f && isRemodel)
            {
                Debug.LogError("Vector3 remodeling");
                blocksides = GameObject.FindGameObjectsWithTag("Block");
                distancetopoint = 5f;
                SelectBlock = null;
                foreach (GameObject side in blocksides)
                {
                    if (Vector3.Distance(side.transform.position,blockside.point) < distancetopoint && Vector3.Distance(side.transform.position,player.transform.position) < 5f)
                    {
                        distancetopoint = Vector3.Distance(side.transform.position,blockside.point);
                        SelectBlock = side;
                    }
                }
                Debug.LogError("Vector3 remodeled");
                if (SelectBlock != null)
                {
                SelectBlock.GetComponent<Renderer>().material = Plank;
                }
            }
    }

    IEnumerator TemporaryGrid(GameObject TemporaryBlock)
    {
        yield return new WaitForSeconds(0.02f);
        Destroy(TemporaryBlock);
    }


}
