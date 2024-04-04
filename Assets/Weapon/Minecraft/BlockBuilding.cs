using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockBuilding : MonoBehaviour
{
    public bool isBlock;
    public bool isPlace;
    public bool isRemove;
    public bool isRemodel;
    public List<Material> Textures = new List<Material>();
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
    public LayerMask Mask;
    private Vector3 VectorDiff = new Vector3(0f,0f,0f);
    private Vector3 PlacementVector = new Vector3(0f,0f,0f);
    public int FoundIndex = 0;
    public int NewIndex = 0;

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
        if (Physics.Raycast(toolray, out blockside, RayDistance, Mask))
        {
            Physics.Raycast(toolray, out blockside, RayDistance, Mask);
            if (isPlace)
            {
                SelectBlock = blockside.collider.gameObject;
                VectorDiff = SelectBlock.transform.position - SelectBlock.transform.parent.position;
                PlacementVector = VectorDiff * 1.8181818181818181818181818181818f;
                GameObject TemporaryBlock = Instantiate(GridBlock, SelectBlock.transform.parent.position + PlacementVector, Quaternion.identity);
                StartCoroutine(TemporaryGrid(TemporaryBlock));
            }
            else if (isRemove)
            {
                SelectBlock = blockside.collider.gameObject;
                GameObject TemporaryBlock = Instantiate(DeleteGrid, SelectBlock.transform.parent.position + new Vector3(0f,0,0f), Quaternion.identity);
                TemporaryBlock.transform.localScale = new Vector3(TemporaryBlock.transform.localScale.x * 1.2f,TemporaryBlock.transform.localScale.y * 1.2f,TemporaryBlock.transform.localScale.z * 1.2f);
                StartCoroutine(TemporaryGrid(TemporaryBlock));
            }
            else if (isRemodel)
            {
                SelectBlock = blockside.collider.gameObject;
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
            Physics.Raycast(toolray, out blockside, RayDistance, Mask);
            if (isPlace)
            {
                SelectBlock = blockside.collider.gameObject;
                if (SelectBlock != null)
                {
                GameObject TemmplateBlock = Instantiate(TemplateBlock, SelectBlock.transform.parent.position + PlacementVector, Quaternion.identity);
                }
            }
            else if (isRemove)
            {
                SelectBlock = blockside.collider.gameObject;
                if (SelectBlock != null)
                {
                Destroy(SelectBlock.transform.parent.gameObject);
                }
            }
            else if (isRemodel)
            {
                FoundIndex = 0;
                NewIndex = 0;
                SelectBlock = blockside.collider.gameObject;
                if (SelectBlock != null)
                {
                
                if (SelectBlock.transform.parent.gameObject.GetComponent<Renderer>().material.name == "lamp");
                {
                    Destroy(SelectBlock.transform.parent.gameObject.GetComponent<Light>());
                }
                for (int mat = 0; mat < Textures.Count; mat++)
                {
                    if (Textures[mat].mainTexture == SelectBlock.transform.parent.gameObject.GetComponent<Renderer>().material.mainTexture)
                    {
                        FoundIndex = Textures.IndexOf(Textures[mat]);
                    }
                }
                NewIndex = FoundIndex + 1;
                if (NewIndex > Textures.Count - 1)
                {
                    NewIndex = 0;
                }
                Material newmat = Textures[NewIndex];
                if (newmat.name == "lamp")
                {
                    SelectBlock.transform.parent.gameObject.AddComponent<Light>();
                }
                SelectBlock.transform.parent.gameObject.GetComponent<Renderer>().material.SetTexture("_MainTex", newmat.mainTexture);
                SelectBlock.transform.parent.gameObject.GetComponent<Renderer>().material.name = newmat.name;
                }
            }
    }

    IEnumerator TemporaryGrid(GameObject TemporaryBlock)
    {
        yield return new WaitForSeconds(0.02f);
        Destroy(TemporaryBlock);
    }


}
