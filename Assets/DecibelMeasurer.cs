using UnityEngine;

//stolen from https://discussions.unity.com/t/how-do-i-get-the-current-volume-level-amplitude-of-playing-audio-not-the-set-volume-but-how-loud-it-is/162556
//thank you, Chris_Entropy.

[RequireComponent(typeof(AudioSource))]
public class DecibelMeasurer : MonoBehaviour
{
	public int sampleDataLength = 1024;

	public float decibels;

	private float[] clipSampleData;

    private AudioSource source;

    private float test;

	void Awake()
    {
        source = GetComponent<AudioSource>();

		clipSampleData = new float[sampleDataLength];
	}
	
	void Update()
    {
        decibels = 0f;

		source.clip.GetData(clipSampleData, source.timeSamples); //I read 1024 samples, which is about 80 ms on a 44khz stereo clip, beginning at the current sample position of the clip.
		foreach (float sample in clipSampleData)
        {
			decibels += Mathf.Abs(sample);
		}
        
		decibels /= sampleDataLength; //clipLoudness is what you are looking for
	}
}