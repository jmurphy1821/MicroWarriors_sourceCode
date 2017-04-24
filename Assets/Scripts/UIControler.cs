using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIControler : MonoBehaviour {

    public Text playerStats;
    public Text WaveNumText;
    public Text helpfulText;
    PlayerControler player;
    LevelControl levelControl;
    bool waveTriggered = true;
    public float waveTimmer;
    float waveTime;

    // Use this for initialization
    void Start () {
        player = FindObjectOfType<PlayerControler>();
        levelControl = FindObjectOfType<LevelControl>();

    }
	
	// Update is called once per frame
	void Update () {
        playerStats.text = "Player Health: "+player.playerHealth+ "/" + player.playerMaxHealth + 
            "\nPlayer Ammo: " + player.playerAmmo + "/" + player.playerMaxAmmo;

        if(waveTriggered)
        {
            //DesplayWave(float displayTime, int waveNum)
            //WaveNumText.text = "Wave " + levelControl.waveNum;

            WaveNumText.text = "9:" + (levelControl.waveNum + 13) + " AM";

            waveTime -= Time.deltaTime;
            WaveNumText.color = new Color(0,0,0, (waveTime/ waveTimmer));
        }

    }
    /*
    void DesplayWave(float displayTime, int waveNum)
    {
        WaveNumText.text = "Wave " + waveNum;
    }
    */
    public void TriggerWave()
    {
        waveTriggered = true;
        waveTime = waveTimmer;
        player.playerHealth = player.playerMaxHealth;
    }

    public void SetHelpfulTips(string info)
    {
        helpfulText.text = info;
    }


}
