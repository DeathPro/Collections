
using UnityEngine;

public class character : MonoBehaviour
{

    public GameObject zone; // Oluşturulacak olan Prefab Unity arayüzünden bu GameObject ile eşleştirilmeli.
    // Rigidbody rb;
    // public GameObject zoneClone; // gerek yok

    // Start is called before the first frame update
    void Start()
    {
        // rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
       // Debug.Log(Time.time);
        if (Input.GetKeyDown(KeyCode.C))
        {
            float x = transform.position.x;
            float y = transform.position.y;
            float z = transform.position.z + 2;
           // transform.position.z = 5f; // böyle olmaz çünkü position dan dönen değer değişken değil

            zone.transform.position = new Vector3(x, y, z);
            // zone.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 2); // bu da olur
            // zoneClone = Instantiate(zone); aslında buna gerek yok sadece oluştursa yeter.
            Instantiate(zone); // burda ikinci bir parametre vermeden de oluşturulabilir. Zaten yukarıda zone transform.position bilgilerini aldı ona göre oluşacaktır.
        }

        // Bu kısım isteğe bağlı. Sadece karakteri tuşlarla ileri geri hareket ettirmek istedim.
        if (Input.GetButton("Vertical") && Input.GetAxis("Vertical") > 0)
        {
            transform.Translate(Vector3.forward * 5 * Time.deltaTime);
            // rb.velocity = Vector3.forward;
        }
        else if (Input.GetButton("Vertical") && Input.GetAxis("Vertical") < 0)
        {
            transform.Translate(Vector3.back * 5 * Time.deltaTime);
        }
    }

    //// Bu da kullanılabilir.Ama içinden geçemezsin. Katı cisimmiş gibi çarparsın ve karşı collider da Is Trigger özelliği False olması gerekiyor yoksa collision algılanmıyor.
    //private void OnCollisionEnter(Collision collision) // collision için colliderlardan 1 tanesinin rigidbody si olması lazım !!!!
    //// Collision events are only sent if one of the colliders also has a non-kinematic rigidbody attached !!!!!!!!!!!!!!!!!!!!!
    //{
    //    if (collision.gameObject.tag == "Zone")
    //    {
    //        Debug.Log("OnCollisionEnter");
    //        transform.position = new Vector3(45, 0, 300);
    //        Destroy(collision.gameObject, 1f);
    //    }
    //}


    private void OnTriggerEnter(Collider other) // bunun çalışması için karakterde rigidbody componenti olması şart ve collider da Is Trigger özelliğinin True olması lazım
    {
        if (other.gameObject.tag == "Zone")
        {
            Debug.Log("OnTriggerEnter");
            transform.position = new Vector3(45, 0, 300);
            // Destroy(zone, 1f); burda zone kullanılması yanlış çünkü orjinal asseti yok etmeye çalışıyor.
            // Destroy(zoneClone, 1f); bu çalışır çünkü instantiate ile oluşturulan nesneyi zoneClone diye bir GameObject ine atadım ve sahnede oluşturulan clone u yok ettim.
            Destroy(other.gameObject, 1f); // Neden aklıma gelmediyse :@ triggerlayan colliderı yok etsin aslında hepsi bu kadar :D
        }
    }
    
}


/* // Yaz Okulu Vize 2. Soru
using UnityEngine;
public class character : MonoBehaviour
{
    public GameObject prefab, player;
    Vector3 playerPos, playerDir, offset;
    float spawnDist = 2;
    float next = 0.5f;
    Quaternion playerRot;
    void Awake()
    {
        offset = new Vector3(5, 0, 0);
        playerPos = player.transform.position;
        playerDir = player.transform.forward;
        playerRot = player.transform.rotation;
    }

    void FixedUpdate()
    {
        if (Time.time >= next)
        {
            Vector3 spawnPos = playerPos + playerDir * spawnDist;
            Instantiate(prefab, offset, playerRot);
            offset += spawnPos; Debug.Log(next);
            next += Time.time;
        }
    }
}
*/