using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManage : MonoBehaviour
{
    // static SoundManage sound;

    private void Awake()
    {
        /*  Benim kod
        if (sound == null)
            sound = this;
        else if (sound != this)
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(sound);
        */
        GameObject[] objs = GameObject.FindGameObjectsWithTag("BackgroundMusic");

        Debug.Log("objs.Length --->>> " + objs.Length);

        if (objs.Length > 1)
            Destroy(this.gameObject);

        DontDestroyOnLoad(this.gameObject);
    }

}
