using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShooter: MonoBehaviour{

    EnemyScript eScript;
    public GameObject eBullet;
    public GameObject bulletSpawn;

    float reloadTimmer;
    public float reloadTime;
    AudioSource audioS;

    // Use this for initialization
    void Start()
    {
        eScript = GetComponent<EnemyScript>();
        audioS = GetComponent<AudioSource>();



    }

    // Update is called once per frame
    void Update() {

        if (reloadTimmer > 0)
        {
            reloadTimmer -= Time.deltaTime;
        }

        if (eScript.player != null)
        { 
            if (eScript.player.transform.position.y > gameObject.transform.position.y - 0.5 && eScript.player.transform.position.y < gameObject.transform.position.y + 0.5f)
            {
                if (reloadTimmer <= 0)
                {
                    //shoot
                    if (eScript.enemyFacingRight)
                    {
                        eBullet.GetComponent<BulletScript>().isGoingRight = true;
                        Instantiate(eBullet, bulletSpawn.transform.position, bulletSpawn.transform.rotation);
                    }
                    else
                    {
                        eBullet.GetComponent<BulletScript>().isGoingRight = false;
                        Instantiate(eBullet, bulletSpawn.transform.position, bulletSpawn.transform.rotation);
                    }
                    reloadTimmer = reloadTime;
                    audioS.Play();
                }
            }
        }
           

	}
}
