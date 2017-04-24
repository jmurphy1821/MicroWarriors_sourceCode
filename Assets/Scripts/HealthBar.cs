using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour {

    public GameObject topHBar;
    public GameObject bottomHBar;
    EnemyScript baseEnemy;

	// Use this for initialization
	void Start () {
        baseEnemy = GetComponentInParent<EnemyScript>();

    }
	
	// Update is called once per frame
	void Update () {

        topHBar.transform.localScale = new Vector3((float)(bottomHBar.transform.localScale.x) * ((float)baseEnemy.health / (float)baseEnemy.maxHealth),
            topHBar.transform.localScale.y, topHBar.transform.localScale.z);

        topHBar.transform.localPosition = new Vector3(
            ((topHBar.transform.localScale.x / 2) - (bottomHBar.transform.localScale.x / 2))/12,
            bottomHBar.transform.localPosition.y, topHBar.transform.localScale.z);

    }
}
