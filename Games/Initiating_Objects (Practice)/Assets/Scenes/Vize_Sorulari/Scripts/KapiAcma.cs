using UnityEngine;

public class KapiAcma : MonoBehaviour
{

    private Transform door;

    // Start is called before the first frame update
    void Start()
    {
        door = GameObject.FindWithTag("Door").GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag=="Kapi_Collider")
        {
            Debug.Log("Kapı Collider'ın İçerisindesin");
            door.Translate(Vector3.up * 5);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Kapi_Collider")
        {
            Debug.Log("Kapı Collider'dan Çıktın");
            door.Translate(Vector3.up * -5);
        }
    }
}
