using UnityEngine;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour {

    bool gameEnd = false;

    public float restartDelay = 1;

    public GameObject completeLevelUI;

    public void CompleteLevel()
    {
        completeLevelUI.SetActive(true);
    }

    public void EndGame()
    { 
        if (gameEnd == false)
        {
            gameEnd = true;
            Debug.Log("GAME OVER");
            // Restart Game :D
            Invoke("Restart", restartDelay);
        }
    }

    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

}
