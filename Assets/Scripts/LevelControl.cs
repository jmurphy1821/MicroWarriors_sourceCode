using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelControl : MonoBehaviour {

    public Transform[] EnemySpawns1;
    public int waveNum;
    public float spawnDelay;
    public float currentSpawnTime;
    //public int[][][] EnemiesToSpawn;
    public int[] EnemiesToSpawnT0;
    public int[] EnemiesToSpawnT1;
    public GameObject[] enemyTypes;
    public bool playerDead;
    private AudioSource audioS;
    UIControler uiControl;
    public int totalActiveEnemies;
    
    

	// Use this for initialization
	void Start () {
        currentSpawnTime = 0.0f;
        audioS = GetComponent<AudioSource>();
        uiControl = FindObjectOfType<UIControler>();
    }
	
	// Update is called once per frame
	void Update () {
        if (spawnDelay > 0)
        {
            currentSpawnTime -= Time.deltaTime;
        }

        
        if (waveNum >= 5 && ((EnemiesToSpawnT0[waveNum] + EnemiesToSpawnT1[waveNum]) <= 0 && totalActiveEnemies <= 0))
        {
            uiControl.WaveNumText.color = new Color(0, 0, 0, (1.0f));
            uiControl.WaveNumText.text = "You Win";
            //WaveNumText.color = new Color(0, 0, 0, (waveTime / waveTimmer));\
            uiControl.SetHelpfulTips("Hit 'Space' to Reset");

            if (Input.GetKeyDown(KeyCode.Space))
            {
                uiControl.SetHelpfulTips("");
                SceneManager.LoadScene("Test01");
            }
        }



        if ((EnemiesToSpawnT0[waveNum] + EnemiesToSpawnT1[waveNum]) > 0 || totalActiveEnemies > 0)
        {
            SpawnWave(enemyTypes, EnemySpawns1, spawnDelay, EnemiesToSpawnT0[waveNum], EnemiesToSpawnT1[waveNum]);
        }
        else if(waveNum >= 5)
        {
            //do nothing
        }
        else
        {
            //Debug.Log("wave advance");

            uiControl.SetHelpfulTips("Hit 'Enter' to Advance Wave");

            if (Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Return))
            {
                waveNum++;
                audioS.Play();
                uiControl.TriggerWave();
                uiControl.SetHelpfulTips("");
            }

        }

        if (playerDead)
        {
            uiControl.SetHelpfulTips("Hit 'Space' to Reset");

            if (Input.GetKeyDown(KeyCode.Space))
            {
                uiControl.SetHelpfulTips("");
                SceneManager.LoadScene("Test01");
            }
            /*
            if (Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Return))
            {
                uiControl.SetHelpfulTips("");
                SceneManager.LoadScene("Test01");
            }

            
            if (Input.GetKeyDown(KeyCode.O))
            {
                uiControl.SetHelpfulTips("");
                SceneManager.LoadScene("Test01");
            }
            */
        }



    }
    
    void SpawnWave(GameObject[] enemyType,Transform[] EnemySpawns1, float spawnDelay,int enemyType0, int enemyType1)
    {
        int totalENum = enemyType0 + enemyType1;
        //currentSpawnTime = 0.0f;

        if(currentSpawnTime <= 0 && totalENum > 0)
        {
            float type0Chance = ((float)enemyType0 / (float)totalENum);
            //Random.Range(0.0f, 1.0f);



            if(type0Chance > Random.Range(0.0f, 1.0f)) //spawn Type0
            {
                //enemyType0--;
                EnemiesToSpawnT0[waveNum]--;
                Instantiate(enemyType[0], EnemySpawns1[Random.Range(0, 4)].position, gameObject.transform.rotation);
            }
            else                                      //spawn Type1
            {
                //enemyType1--;
                EnemiesToSpawnT1[waveNum]--;
                Instantiate(enemyType[1], EnemySpawns1[1].position, gameObject.transform.rotation);
            }
            totalActiveEnemies++;
            currentSpawnTime = spawnDelay;
        }

    }
    

}
