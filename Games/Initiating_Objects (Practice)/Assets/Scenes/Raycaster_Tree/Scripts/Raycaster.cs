using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Raycaster : MonoBehaviour
{
    public float maxCheckDistance;
    public Transform rayOrigin;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Ray ray = new Ray(transform.position, Vector3.down);
        Ray ray = new Ray(rayOrigin.position, -rayOrigin.up);
        if (Physics.Raycast(ray, out RaycastHit hitInfo))
        {
            Debug.Log("Aşşağıda " + hitInfo.collider.gameObject.name + " Var !!!");
            Destroy(hitInfo.collider.gameObject);
        }
        else
        {
            Debug.Log("Aşşağıda Bir Şey Yok !!!");
        }

        Debug.DrawRay(ray.origin,ray.direction * maxCheckDistance,Color.red);
        
    }
}
