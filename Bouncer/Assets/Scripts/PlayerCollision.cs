using UnityEngine;

public class PlayerCollision : MonoBehaviour {

    public PlayerMovement movement;  // A reference to our PlayerMovement script
    

    // This function runs when we hit another object
    // We get information about the collision and call it "collisioninfo"
	void OnCollisionEnter (Collision collisioninfo){

        //We check if the object we collied with has a tag called "Obstacle"
        if (collisioninfo.collider.tag == "Obstacle"){
            Debug.Log("We Hit to " + collisioninfo.collider.name);
            movement.enabled = false;  // Disable the players movement
            FindObjectOfType<GameManager>().EndGame();
        }
    }

}
