using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DashcatDeath : MonoBehaviour
{
    public void Death()
    {
        SkinName skin = gameObject.transform.parent.parent.parent.parent.gameObject.GetComponent<SkinName>();
        skin.playerMoveC.curArmor = 0f;
        skin.playerMoveC.CurHealth = 0f;
    }
}
