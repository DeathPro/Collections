using UnityEngine;

public class Top : MonoBehaviour
{
    
    private Rigidbody2D rb2;
    private AudioSource audioSource;

    public Raket sagRaket, solRaket;

    public float moveSpeed = 15;

    // Start is called before the first frame update
    void Start()
    {
        audioSource = this.gameObject.GetComponent<AudioSource>();
        rb2 = this.gameObject.GetComponent<Rigidbody2D>();
        rb2.velocity = Vector2.right * moveSpeed;
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.DrawRay(transform.position, rb2.velocity, Color.blue);
      //  Debug.Log("Time.deltaTime = " + Time.deltaTime);
    }

    private void FixedUpdate()
    {
        Debug.DrawRay(transform.position, rb2.velocity, Color.red);
      //  Debug.Log("Time.deltaTime = " + Time.deltaTime);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        audioSource.Play();

        if (collision.gameObject.GetComponent<TagManager>() == null)
            return;

        // Debug.Log("Çarpılan Nesne --->" + collision.gameObject.tag);

        Tags tags = collision.gameObject.GetComponent<TagManager>().etiket;

        switch (tags)
        {
            case Tags.SOL_KALE:
                sagRaket.MakeScore();
                break;
            case Tags.SAG_KALE:
                solRaket.MakeScore();
                break;
            case Tags.SOL_RAKET:
                ChangeVelocity(1, collision);
                break;
            case Tags.SAG_RAKET:
                ChangeVelocity(-1, collision);
                break;
            default:
                break;
        }
    }

    private void ChangeVelocity(int x, Collision2D collision)
    {
        float a = gameObject.transform.position.y - collision.collider.bounds.center.y;
        float b = collision.collider.bounds.size.y;
        float y = a / b;
        rb2.velocity = new Vector2(x, y) * moveSpeed;
    }
}
