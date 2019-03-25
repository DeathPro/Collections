using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManage : MonoBehaviour
{
    public bool gameStart;
    CharacterControl character;

    // Start is called before the first frame update
    void Start()
    {
        character = GameObject.Find("Character").GetComponent<CharacterControl>();
        StartGame();
    }

    private void StartGame()
    {
        gameStart = true;
    }

    private void LoadScene()
    {
        SceneManager.LoadScene(0);
    }

    private void RestartGame()
    {
        Invoke("LoadScene", 1.5f);
    }

    // Update is called once per frame
    void Update()
    {
        if (gameStart)
        {
            character.Run();

            if (character.isFalling)
            {
                RestartGame();
            }
        }
    }
}
