using UnityEngine;

public class VizeSonSoru : MonoBehaviour
{
    public GameObject player;
    Vector3 playerPos;
    Vector3 playerDirection;
    Quaternion playerRotation;
    float spawnDistance = 2;
    public GameObject prefab;
    Vector3 offset = new Vector3(0, 0, 2);
    void Start()
    {
        playerPos = player.transform.position;
        playerDirection = player.transform.forward;
        Debug.Log("player.transform.forward -->>" + player.transform.forward);
        playerRotation = player.transform.rotation;
    }
    void Update()
    {
        Vector3 spawnPos = playerPos + playerDirection * spawnDistance;
        if (Input.GetKeyDown(KeyCode.X))
        {
            Instantiate(prefab, offset, playerRotation);
            offset += spawnPos;
        }
    }
}