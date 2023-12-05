using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UITextureAnimation : MonoBehaviour
{
    public Texture2D[] frames;

    public float frameRate;

    private float timer;

    private int frameIndex;

    private UITexture texture;

    void Start()
    {
        texture = GetComponent<UITexture>();
        
        texture.mainTexture = frames[0];

        timer = frameRate;
        frameIndex++;
    }

    void Update()
    {
        if (timer > 0f)
        {
            timer -= Time.deltaTime;
            return;
        }

        if (frameIndex == frames.Length)
        {
            frameIndex = 0;
        }

        texture.mainTexture = frames[frameIndex];

        timer = frameRate;
        frameIndex++;
    }
}
