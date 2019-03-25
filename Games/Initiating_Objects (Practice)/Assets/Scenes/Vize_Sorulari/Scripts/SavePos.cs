using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SavePos : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        LoadPosition();
    }


    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
            savePosition();
        }
    }

    private void savePosition()
    {
        //float x = transform.position.x;
        //float y = transform.position.y;
        //float z = transform.position.z;

        PlayerPrefs.SetFloat("X", transform.position.x);
        PlayerPrefs.SetFloat("Y", transform.position.y);
        PlayerPrefs.SetFloat("Z", transform.position.z);

    }

    private void LoadPosition()
    {
        transform.position = new Vector3(PlayerPrefs.GetFloat("X"), PlayerPrefs.GetFloat("Y"), PlayerPrefs.GetFloat("Z"));
    }
}
