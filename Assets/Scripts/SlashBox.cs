using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlashBox : MonoBehaviour {

    public int dammage;
    float SlashTimmer;
    public float SlashTime;

    SpriteRenderer spriteR;
    public Sprite slashSprite;
    private AudioSource audioS;


    // Use this for initialization
    void Start () {
        spriteR = GetComponent<SpriteRenderer>();
        spriteR.sprite = null;
        audioS = GetComponent<AudioSource>();

    }

    // Update is called once per frame
    void Update()
    {

        if (SlashTimmer > 0)
        {
            SlashTimmer -= Time.deltaTime;
        }
        if (SlashTimmer < SlashTime * (3.0f / 4.0f))
        {
            spriteR.sprite = null;
        }
	}

    void OnTriggerStay2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            if (SlashTimmer <= 0)
            {
                spriteR.sprite = slashSprite;
                other.GetComponent<PlayerControler>().playerHealth -= dammage;
                SlashTimmer = SlashTime;
                audioS.Play();
            }
        }
    }
}
