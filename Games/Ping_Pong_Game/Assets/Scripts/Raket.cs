using UnityEngine;
using UnityEngine.UI;

public class Raket : MonoBehaviour
{
    public Text raketSkor;
    protected Rigidbody2D rb2;

    public string getAxisName;

    [HideInInspector]
    public int skor;

    private float velocity;
    public float moveSpeed = 15;

    // Start is called before the first frame update
    void Start()
    {
        rb2 = this.gameObject.GetComponent<Rigidbody2D>();
    }

    protected virtual void FixedUpdate()
    {
        velocity = Input.GetAxis(getAxisName);

        rb2.velocity = new Vector2(0, velocity) * moveSpeed;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void MakeScore()
    {
        skor++;
        raketSkor.text = skor.ToString();
    }
}
