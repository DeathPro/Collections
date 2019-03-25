using UnityEngine;


public class RaketAI : Raket
{
    public Transform pozisyon;
    
    public float referanceValue = 2;

    // Start is called before the first frame update
    void Start()
    {
        rb2 = gameObject.GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    protected override void FixedUpdate()
    {
        float a = Mathf.Abs(pozisyon.position.y - transform.position.y);

        if (a > referanceValue)
        {
            if (pozisyon.position.y > transform.position.y)
                rb2.velocity = new Vector2(0, 1) * moveSpeed;
            if (pozisyon.position.y < transform.position.y)
                rb2.velocity = new Vector2(0, -1) * moveSpeed;
        }
    }
}
