using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CharacterControl : MonoBehaviour
{
    // public SceneController sahneKontrol;

    public float moveSpeed = 1.5f;
    public bool sagaBakiyor = true;
    public bool isFalling = false;
    public bool triggered = false;
    int score, highScore;

    Animator animator;
    Transform rayOrigin;
    Text highText, scoreText;
    ParticleSystem particleEffect;
    AudioSource crystalSound;
    float elapseTime;

    // Start is called before the first frame update
    void Start()
    {
        animator = gameObject.GetComponent<Animator>();
        rayOrigin = GameObject.FindWithTag("Raycast").GetComponent<Transform>();
        highText = GameObject.FindWithTag("highScore").GetComponent<Text>();
        scoreText = GameObject.FindWithTag("score").GetComponent<Text>();
        particleEffect = GameObject.Find("Efekt").GetComponent<ParticleSystem>();
        crystalSound = GameObject.FindWithTag("CrystalSound").GetComponent<AudioSource>();

        loadScore();
    }

    // Update is called once per frame
    public void Run()
    {
        /* Benim Kodum
        this.gameObject.transform.Translate(Vector3.forward * Time.deltaTime, transform);

        if (Input.GetKeyDown(KeyCode.Space) && this.gameObject.transform.rotation.y >= 0)
        {
            this.gameObject.transform.Rotate(0, -90, 0);
        }
        else if(Input.GetKeyDown(KeyCode.Space))
        {
            this.gameObject.transform.Rotate(0, 90, 0);
        }
        */

        if (Input.GetKeyDown(KeyCode.Space))
            Turn();

        if (Input.touchCount > 0)
        {
            switch (Input.GetTouch(0).phase)
            {
                case TouchPhase.Began:
                    Turn();
                    break;
            }
        }
        
        Move();

        Debug.DrawRay(rayOrigin.position, Vector3.down * 10, Color.blue);
        // Debug.Log("Run Fonksiyonu");

        if (!Physics.Raycast(rayOrigin.position, Vector3.down))
            setFallAnimation();

    }

    private void Move()
    {
        if ((elapseTime += Time.deltaTime) > 10)
        {
            animator.speed += 0.1f;
            moveSpeed += 0.3f;
            elapseTime = 0;
        }

        transform.Translate(Vector3.forward * Time.deltaTime * moveSpeed);
        setRunAnimation();
    }

    private void Turn()
    {
        if (sagaBakiyor)
        {
            transform.Rotate(Vector3.up, -90);
            sagaBakiyor = false;
        }
        else if (!sagaBakiyor)
        {
            transform.Rotate(Vector3.up, 90);
            sagaBakiyor = true;
        }
    }

    private void setRunAnimation()
    {
        animator.SetTrigger("run");
    }

    private void setFallAnimation()
    {
        animator.SetTrigger("fall");

        // sahneKontrol.Invoke("LoadScene", 1f);

        // Invoke("loadScene", 1f);

        isFalling = true;
    }

    private void setIdleAnimation()
    {
        animator.SetTrigger("idle");
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Elmas")
        {
            score++;
            scoreText.text = score.ToString();
            if (score >= highScore)
            {
                highScore = score;
                highText.text = highScore.ToString();
                saveScore();
            }
            CreateEffect(other);
            triggered = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Elmas")
            triggered = false;
    }

    private void saveScore()
    {
        PlayerPrefs.SetInt("HS", highScore);
        PlayerPrefs.Save();
    }

    private void loadScore()
    {
        highScore = PlayerPrefs.GetInt("HS");
        highText.text = highScore.ToString();
    }

    //private void loadScene()
    //{
    //    SceneManager.LoadScene(0);
    //}

    private void CreateEffect(Collider other)
    {
        if (other.tag == "Elmas")
        {
            particleEffect.Play();
            crystalSound.Play();
            Destroy(other.gameObject, 0.4f);
            // instansiate de kullanılabilir.
        }
    }
}
