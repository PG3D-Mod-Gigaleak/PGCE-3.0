using UnityEngine.EventSystems;
using UnityEngine;

public class MobileDragTile : MonoBehaviour, IDragHandler
{
    public void OnDrag(PointerEventData eventData)
    {
        timer = timerCheck;
        value = eventData.delta / 10;
    }

    public Vector2 value;

    private float timerCheck = 0.02f, timer;

    void Update()
    {
        timer -= Time.deltaTime;
        if (timer <= 0f)
        {
            Stop();
        }
    }

    public void Stop()
    {
        value = Vector2.zero;
    }
}
