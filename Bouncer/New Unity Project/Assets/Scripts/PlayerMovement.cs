using UnityEngine;

public class PlayerMovement : MonoBehaviour {

    // This is a reference to the Rigidbody component called "rb"
    public Rigidbody rd;
	
    // Use this for initialization
	void Start () {
        //Debug.Log("Hello World :D");
        //rd.AddForce(0, 200, 500);
	}

    public float forwardForce = 8000; // Variable that determines the forward force
    public float sidewaysForce = 50;  // Variable that determines the sideways force
    public float upForwardForce = 80; // Variable that determines the upforward force

    // We marked this as "Fixed"Update because we are using
    // it to mess with physics.
    void FixedUpdate ()
    {
        
        rd.AddForce(0, 0, forwardForce * Time.deltaTime); // Add forwardForce on the z-axis 

        if (Input.GetKey("d")) // if player pressing "d" key 
        {
            // Add a force to the right
            rd.AddForce(sidewaysForce * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
        }

        if (Input.GetKey("a")) // If the player is pressing the "a" key
        {
            // Add a force to the left
            rd.AddForce(-sidewaysForce * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            // Add a force to the up
            rd.AddForce(0, upForwardForce * Time.deltaTime, 0, ForceMode.VelocityChange);
        }

        if (rd.position.y < -1)
        {
            FindObjectOfType<GameManager>().EndGame();
        }
    }
	
	// Update is called once per frame
	void Update () {
        //rd.AddForce(0, 0, 2000 * Time.deltaTime);
	}
}
