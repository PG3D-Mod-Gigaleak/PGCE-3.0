using UnityEngine;

public class MobileLookControls : MonoBehaviour
{
    public Vector2 curPos, lastPos;

    public Vector2 value;

    private int touchIndex;

    void Start()
    {
        touchIndex = -1;
    }

    void Update()
    {
        if (Input2.touchCount > 0 && touchIndex == -1)
        {
            for (int i = 0; i < Input2.touches.Length; i++)
            {
                if (Input2.touches[i].phase == TouchPhase.Began)
                {
                    if (Input2.touches[i].position.x > Screen.width / 2)
                    {
                        touchIndex = i;
                        lastPos = Vector2.zero;
                        curPos = Vector2.zero;
                        break;
                    }
                }
            }
        }
        if (touchIndex == -1)
        {
            return;
        }
        Touch touch = Input2.touches[touchIndex];
        if (touch.position.x <= Screen.width / 2)
        {
            lastPos = Vector2.zero;
            curPos = Vector2.zero;
            touchIndex = -1;
            value = Vector2.zero;
            return;
        }
        if (touch.phase == TouchPhase.Moved)
        {
            curPos = touch.position / 15f;
            if (curPos == lastPos)
            {
                value = Vector2.zero;
                return;
            }
            if (lastPos != Vector2.zero)
            {
                value = curPos - lastPos;
            }
        }
        else if (touch.phase == TouchPhase.Ended)
        {
            lastPos = Vector2.zero;
            curPos = Vector2.zero;
            touchIndex = -1;
            value = Vector2.zero;
            return;
        }
        lastPos = curPos;
    }
}