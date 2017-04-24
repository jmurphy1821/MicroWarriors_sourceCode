using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour {

    public bool isGoingRight = true;
    public int damage = 2;
    float selfDestructTimer = 5.0f;
    public float speed;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        selfDestructTimer -= Time.deltaTime;
        if(selfDestructTimer <= 0)
        {
            Destroy(gameObject);
        }
        
        if (isGoingRight)
        {
            GetComponent<Rigidbody2D>().velocity = new Vector2(speed, 0.0f);
        }
        else
        {
            GetComponent<Rigidbody2D>().velocity = new Vector2(-speed, 0.0f);
        }
	}

    public void DestroySelf()
    {
        Destroy(gameObject);
    }
}
