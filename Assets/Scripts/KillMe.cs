using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KillMe : MonoBehaviour {

    public float deathTimmer;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        deathTimmer -= Time.deltaTime;
        if(deathTimmer <= 0)
        {
            Destroy(gameObject);
        }
    }
}
