using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour {

    public int health = 10;
    public int maxHealth = 10;
    public float enemySpeed;

    public bool enemyFacingRight = false;

    PlayerControler playerControler;
    public GameObject player;
    Rigidbody2D enemyRigidbody2D;

    public GameObject bloodEffect;

    public LevelControl levelControl;

	// Use this for initialization
	void Start () {        
        playerControler = FindObjectOfType<PlayerControler>();
        player = playerControler.gameObject;
        enemyRigidbody2D = gameObject.GetComponent<Rigidbody2D>();
        levelControl = FindObjectOfType<LevelControl>();
    }
	
	// Update is called once per frame
	void Update () {
        gameObject.transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);

        EnemyMovemnet();
        EnemyDirection();

        if(player == null)
        {
            enemyFacingRight = true;
        }

        if (health <= 0)
            DestroyEnemy();
    }
    void EnemyMovemnet()
    {
        if (player != null)
        {
            float playerXdistance = Mathf.Abs(player.transform.position.x - gameObject.transform.position.x);
            float playerYdistance = Mathf.Abs(player.transform.position.y - gameObject.transform.position.y);

            float enemyXVelocity = 0.0f;
            float enemyYVelocity = 0.0f;

            if (player.transform.position.x < gameObject.transform.position.x - 0.02f)//player to left
            {
                enemyXVelocity = -enemySpeed;
                enemyFacingRight = false;
            }
            if (player.transform.position.x > gameObject.transform.position.x + 0.02f)  //player to right
            {
                enemyXVelocity = enemySpeed;
                enemyFacingRight = true;
            }

            if (playerYdistance > playerXdistance - 0.5f)
            {
                if (player.transform.position.y > gameObject.transform.position.y + 0.02f)//player to above
                {
                    enemyYVelocity = enemySpeed;
                }
                else if (player.transform.position.y < gameObject.transform.position.y - 0.02f)//player is below
                {
                    enemyYVelocity = -enemySpeed;
                }
            }

            enemyRigidbody2D.velocity = new Vector2(enemyXVelocity, enemyYVelocity);
        }
        else
        {
            //enemyXVelocity = enemySpeed;
            enemyFacingRight = false;
            enemyRigidbody2D.velocity = new Vector2(-enemySpeed, 0.0f);
        }
    }

    void EnemyDirection()
    {
        if(enemyFacingRight)
        {
            transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        }
        else
        {
            transform.localScale = new Vector3(-1.0f, 1.0f, 1.0f);
        }
    }

    void DestroyEnemy()
    {
        levelControl.totalActiveEnemies--;
        Instantiate(bloodEffect, gameObject.transform.position, gameObject.transform.rotation);
        Destroy(gameObject);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "Bullet")
        {
            health -= other.GetComponent<BulletScript>().damage;
            other.GetComponent<BulletScript>().DestroySelf();
        }
    }

}
