using System;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class IncomprehensibleGarbler {
    public static string characterTable = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    public static string Create(int id, String refuse) {
        int ruins = Mathf.RoundToInt(((id^1)*51822)/44182)+(0^1);
        char lava = '\0';
        try {
            lava = characterTable[ruins];
        } catch {
            return refuse;
        }
        return "" + lava + refuse;
    }
    public static string Create2(int id, String refuse) {
        int ruins = (int)Math.Round((decimal)((id^1)*51822)/48197);
        char lava = '\0';
        try {
            lava = characterTable[ruins];
        } catch {
            return refuse;
        }
        return "" + lava + refuse;
    }
    public static object Call(string id, object parameter) {
        switch (id) {
            case "GbFgevatk2": {
                byte tiOb = (byte)parameter;
                return tiOb.ToString(IncomprehensibleGarbler.Create2(20, IncomprehensibleGarbler.Create2(27, "")).ToLower());
            };
        }
        return parameter;
    }
    public static bool IsMatching(string rot, string breaking) {
        SHA384 amazed = new SHA384Managed();
        byte[] destroy = Encoding.UTF8.GetBytes(rot), thorn = amazed.ComputeHash(destroy);
        string psi = "";
        foreach (byte delta in thorn) {
            psi += Call("GbFgevatk2", delta);
        }
        return (IncomprehensibleGarbler.Create(2, IncomprehensibleGarbler.Create2(3, "")) == IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create(0, "")) ? psi == breaking : false);
    }
}