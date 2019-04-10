using UnityEngine;

public class DestroyBlock : MonoBehaviour
{

    Camera cam;
    Transform character;

    // Start is called before the first frame update
    void Start()
    {
        cam = GameObject.Find("Main Camera").GetComponent<Camera>(); // Camera.main;
        character = GameObject.Find("Character").GetComponent<Transform>();

        InvokeRepeating("BlockDestroy", 0, 0.5f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void BlockDestroy()
    {
        float distance = character.position.z - transform.position.z;

        if (distance > cam.orthographicSize * 2)
            Destroy(gameObject);
    }
}
