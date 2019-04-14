using UnityEngine;

public class WallMaker : MonoBehaviour
{
    Camera cam;
    Transform character;
    public Transform lastBlock;
    public GameObject blockPrefab;
    public GameObject blockPrefab2;
    Vector3 lastBlockPos;
    Animator animController;

    // Start is called before the first frame update
    void Start()
    {
        lastBlockPos = lastBlock.position;
        cam = GameObject.Find("Main Camera").GetComponent<Camera>(); // Camera.main;
        character = GameObject.Find("Character").GetComponent<Transform>();
        animController = GameObject.Find("Character").GetComponent<Animator>();
        // character = FindObjectOfType<CharacterControl>().GetComponent<Transform>();
        InvokeRepeating("CreateWall", 0, 0.1f);
    }

    // Update is called once per frame
    void Update()
    {

    }

    void CreateWall()
    {
        float distance = lastBlockPos.z - character.position.z;

        if (distance > cam.orthographicSize * 2)
        {
            Debug.Log("Kamera Görüşünde Zeminler Yeteri Kadar Var !");
            return;
        }

        //GameObject newBlock = Instantiate(blockPrefab, transform);

        int chance = Random.Range(1, 11);

        GameObject newBlock = Instantiate(blockPrefab, transform);
        GameObject newBlock2 = Instantiate(blockPrefab2, transform);

        if (chance < 6)
        {
            // newBlocku son blokun soluna ekle.
            newBlock2.transform.position = new Vector3(lastBlockPos.x - 1, 0, lastBlockPos.z);

            Destroy(newBlock);

            lastBlockPos = newBlock2.transform.position;

            if (chance % 3 == 0)
                newBlock2.transform.GetChild(0).gameObject.SetActive(true);
            else
                newBlock2.transform.GetChild(0).gameObject.SetActive(false);
        }
        else
        {
            // newBlocku son blokun önüne ekle.
            newBlock.transform.position = new Vector3(lastBlockPos.x, 0, lastBlockPos.z + 1);

            Destroy(newBlock2);

            lastBlockPos = newBlock.transform.position;

            if (chance % 3 == 0)
                newBlock.transform.GetChild(0).gameObject.SetActive(true);
            else
                newBlock.transform.GetChild(0).gameObject.SetActive(false);
        }
    }
}
