using UnityEngine;

public class TreeMaker : MonoBehaviour
{

    public GameObject treeprefab;

    // Start is called before the first frame update
    void Start()
    {
        // CreateTrees();
        // Invoke("CreateTrees", 2f);
        InvokeRepeating("CreateTree", 1f, 0.1f);
    }

    

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            CancelInvoke();
            Destroy(gameObject,2f);
        }
    }

    private void CreateTree()
    {
        // Instantiate(treeprefab);

            GameObject tree = Instantiate(treeprefab, transform);
            // Instantiate(treeprefab);
            tree.transform.position = new Vector3(Random.Range(-4, +4), treeprefab.transform.position.y, Random.Range(+5, -5));
    }

    private void CreateTrees()
    {
        // Instantiate(treeprefab);

        for (int i = 0; i < 30; i++)
        {
            GameObject tree = Instantiate(treeprefab, transform);
            // Instantiate(treeprefab);
            tree.transform.position = new Vector3(Random.Range(-4, 4), treeprefab.transform.position.y, Random.Range(-5, 5));
        }
    }
}
