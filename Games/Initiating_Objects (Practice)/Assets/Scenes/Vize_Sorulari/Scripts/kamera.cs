using UnityEngine;

public class kamera : MonoBehaviour
{
    public GameObject player;
    private Vector3 diff;
    void Start()
    {
        diff = transform.position - player.transform.position;
    }
    void Update()
    {
        transform.position = player.transform.position + diff;
    }
}
