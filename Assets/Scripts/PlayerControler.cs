using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControler : MonoBehaviour {

    bool playerDirrectionRight = true;
    public GameObject bullet;
    public GameObject bulletSpawnPoint;
    LevelControl levelControl;

    public int playerMaxHealth;
    public int playerHealth;
    public int playerMaxAmmo;
    public int playerAmmo;

    private Animator anmi;
    private AudioSource audioS;

    public GameObject bloodEffect;
    public bool isInvincable;


	// Use this for initialization
	void Start () {
        anmi = GetComponent <Animator>();
        audioS = GetComponent<AudioSource>();
        levelControl = FindObjectOfType<LevelControl>();
    }
	
	// Update is called once per frame
	void Update () {




        gameObject.transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);


        if(isInvincable)
        {
            playerHealth = playerMaxHealth;
        }

        Movement();
        playerArtControl();
        playerShooting();

        if(playerHealth <=0)
        {
            PlayerDead();
        }

    }	

    void playerShooting()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            //shoot
            if(playerDirrectionRight)
            {
                bullet.GetComponent<BulletScript>().isGoingRight = true;
            }
            else
            {
                bullet.GetComponent<BulletScript>().isGoingRight = false;
            }
            Instantiate(bullet, bulletSpawnPoint.transform.position, gameObject.transform.rotation);
            audioS.Play();
        }
    }

    void playerArtControl()
    {
        if (playerDirrectionRight)
        {
            transform.localScale = new Vector3(1.0f,1.0f,1.0f);
        }
        else
        {
            transform.localScale = new Vector3(-1.0f,1.0f,1.0f);
        }
    }

	void Movement(){

        float xSpeed = 0.0f;
        float ySpeed = 0.0f;
		if (Input.GetKey(KeyCode.W)) {
            ySpeed = 1.0f;
        }
        if (Input.GetKey(KeyCode.S))
        {
            ySpeed = -1.0f;
        }
        if (Input.GetKeyUp(KeyCode.S) && Input.GetKey(KeyCode.W))
            ySpeed = 0.0f;

        if (Input.GetKey(KeyCode.A))
        {
            xSpeed = -1.0f;
            playerDirrectionRight = false;
        }       
        if (Input.GetKey(KeyCode.D)) {
            xSpeed = 1.0f;
            playerDirrectionRight = true;
        }
        if (Input.GetKeyUp(KeyCode.A) && Input.GetKey(KeyCode.D))
            xSpeed = 0.0f;

        if (xSpeed == 0.0f && ySpeed == 0.0f)
        {
            anmi.SetBool("IsWalking",false);
        }
        else
        {
            anmi.SetBool("IsWalking", true);
        }

        GetComponent<Rigidbody2D>().velocity = new Vector2(xSpeed, ySpeed);
    }

    void PlayerDead()
    {
        //do elabrate Thing
        Instantiate(bloodEffect, gameObject.transform.position, gameObject.transform.rotation);
        levelControl.playerDead = true;

        Destroy(gameObject);
    }
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "EBullet")
        {
            playerHealth -= other.GetComponent<BulletScript>().damage;
            other.GetComponent<BulletScript>().DestroySelf();
        }
    }
}
