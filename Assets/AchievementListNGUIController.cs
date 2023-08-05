﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AchievementListNGUIController : MonoBehaviour {
    public UIGrid scrollView;
    public GameObject achBtnReference;
    public Texture2D blankTex;
    public UIButton adminBtn;
    public void Start() {
        foreach (Achievements.Achievement achievement in Resources.Load<Achievements>("Achievements").achievements) {
            if (achievement.fakeAchievement) {
                return;
            }
            GameObject clonedAchBtn = (GameObject)Instantiate(achBtnReference);
            clonedAchBtn.transform.parent = scrollView.transform;
            clonedAchBtn.transform.localScale = Vector3.one;
            clonedAchBtn.GetComponent<AchBtnRef>().name.text = achievement.name;
            clonedAchBtn.GetComponent<AchBtnRef>().desc.text = achievement.description;
            clonedAchBtn.GetComponent<AchBtnRef>().icon.mainTexture = achievement.icon;
            clonedAchBtn.SetActive(true);
            scrollView.Reposition();
            if (Storager.hasKey(achievement.id + (string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create2(42, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(63, IncomprehensibleGarbler.Create2(6, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(74, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(10, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(13, IncomprehensibleGarbler.Create2(19, "")))))))))))), false, true, true, true, true, true, true, true, true, true, true, true))) {
                SetUpButtonHides(achievement, clonedAchBtn, false);
            } else {
                SetUpButtonHides(achievement, clonedAchBtn, true);
            }
        }
        #if UNITY_EDITOR
        adminBtn.gameObject.SetActive(true);
        #else
        adminBtn.gameObject.SetActive(false);
        #endif
    }
    public void SetUpButtonHides(Achievements.Achievement ach, GameObject btn, bool hide) {
        StartCoroutine(ActualSetUpButtonHides(ach, btn, hide));
    }
    public void OnBack() {
        Application.LoadLevel(Defs.CurrentMainMenuScene);
    }
    public void OnAdmin() {
        #if UNITY_EDITOR
        foreach (Achievements.Achievement achievement in Resources.Load<Achievements>("Achievements").achievements) {
            if (Storager.hasKey(achievement.id + "-ACHIEVEMENT")) {
                Storager.removeObjectForKey(achievement.id + "-ACHIEVEMENT");
            }
        }
        Storager.setInt("deathCount", 0, false);
        Storager.setInt("bowshotcount", 0, false);
        Storager.setInt("earsOn", 0, false);
        #endif
    }
    public IEnumerator ActualSetUpButtonHides(Achievements.Achievement ach, GameObject btn, bool hide) {
        if (hide) {
            if (ach.hideAchievement) {
                Destroy(btn);
                yield return null;
                scrollView.Reposition();
            }
            if (ach.hideDescription) {
                btn.GetComponent<AchBtnRef>().desc.text = "[ff0000]Unlock this achievement to view it's description";
            }
            if (ach.hideName) {
                btn.GetComponent<AchBtnRef>().name.text = "[ff0000]Locked!";
            }
            if (ach.hideIcon) {
                btn.GetComponent<AchBtnRef>().icon.mainTexture = blankTex;
            }
        } else {
            btn.GetComponent<AchBtnRef>().icon.transform.parent.gameObject.GetComponent<UITexture>().color = Color.green;
            btn.GetComponent<AchBtnRef>().icon.transform.parent.gameObject.GetComponent<UIButton>().defaultColor = Color.green;
            btn.GetComponent<AchBtnRef>().icon.transform.parent.gameObject.GetComponent<UIButton>().pressed = Color.green;
            btn.GetComponent<AchBtnRef>().icon.transform.parent.gameObject.GetComponent<UIButton>().hover = Color.green;
        }
    }
}
