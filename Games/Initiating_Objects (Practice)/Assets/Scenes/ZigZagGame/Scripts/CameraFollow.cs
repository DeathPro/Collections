using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    Transform character;
    Vector3 fark;

    // Start is called before the first frame update
    void Start()
    {
        // character = GameObject.Find("Character").GetComponent<Transform>();
        character = GameObject.FindObjectOfType<CharacterControl>().GetComponent<Transform>();
        fark = transform.position - character.position;
    }

    private void LateUpdate()
    {
        transform.position = character.position + fark;
    }

}
