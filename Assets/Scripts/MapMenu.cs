using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapMenu : MonoBehaviour
{
	private MapInfo _info;

	private GameObject _mapButton;

	public UIGrid grid;
	public UIScrollView scrollView;

	void Start()
	{
		_info = Resources.Load<GameObject>("MapInfo").GetComponent<MapInfo>();
		_mapButton = Resources.Load<GameObject>("MapButton");
		foreach (MapInfo.Map map in _info.deathmatchMaps)
		{
			MapButton mapBtn = Instantiate(_mapButton, grid.transform).GetComponent<MapButton>();
			mapBtn.nameLabel.text = map.mapName;
			mapBtn.mapIcon.mainTexture = map.icon;
			mapBtn.GetComponent<UIDragScrollView>().scrollView = scrollView;
		}
		grid.Reposition();
	}

	void Update()
	{
		//scroll.localPosition = new Vector3(scroll.localPosition.x, scroll.localPosition.y + mouseScrollThing, scroll.localPosition.z);
	}

	public int mouseScrollThing
	{
		get
		{
			return (Input.GetAxis("Mouse ScrollWheel") == 0 ? 0 : Input.GetAxis("Mouse ScrollWheel") < 0 ? 50 : -50);
		}
	}
}
