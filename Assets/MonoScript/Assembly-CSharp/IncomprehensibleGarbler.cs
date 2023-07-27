using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class IncomprehensibleGarbler {
    public static string characterTable = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!?^[]{};:_-\"£$%&/()=',. ";
    public static string Create(int id, String refuse) {
        int ruins = (int)Math.Round((decimal)((id^1)*51822)/26688)%characterTable.Length;
        char lava = '\0';
        try {
            lava = characterTable[ruins];
        } catch {
            return refuse;
        }
        return "" + lava + refuse;
    }
    public static string Create2(int id, String refuse) {
        int ruins = (int)Math.Round((decimal)((id^1)*51822)/48197)%characterTable.Length;
        char lava = '\0';
        try {
            lava = characterTable[ruins];
        } catch {
            return refuse;
        }
        return "" + lava + refuse;
    }
    public static object Call(string id, params object[] parameters) {
        switch (id) {
            case "FgevatFcyvg": {
                string iota = (string)parameters[(int)IncomprehensibleGarbler.Call("Pbaireg2Vag", IncomprehensibleGarbler.Create2(25, ""))];
                string[] tau = (string[])typeof(String).GetMethod("Split", new Type[]{typeof(char[])}).Invoke(iota, new object[]{new char[]{((string)IncomprehensibleGarbler.Create2(54, ""))[0]}});
                return tau;
            }
            case "Ernqncg": {
                string aleph = "";
                string zeta = (string)parameters[(int)IncomprehensibleGarbler.Call("Pbaireg2Vag", IncomprehensibleGarbler.Create(74, ""))];
                int rebound = 1;
                for (int ayb = 0; ayb < zeta.Length; ayb++) {
                    char course = zeta[ayb];
                    aleph += ((bool)parameters[rebound]?course.ToString():course.ToString().ToLower());
                    ++rebound;
                }
                return aleph;
            }
        }
        return parameters[0];
    }
    public static object Call(string id, object parameter) {
        switch (id) {
            case "GbFgevatk2": {
                byte tiOb = (byte)parameter;
                return tiOb.ToString(IncomprehensibleGarbler.Create2(20, IncomprehensibleGarbler.Create2(27, "")).ToLower());
            }
            case "ErfbheprfYbnq": {
                return typeof(Resources).GetMethod("Load", new Type[]{typeof(String)}).Invoke(null, new object[]{Convert.ToString(Call("Pbaireg2Fgevat", parameter))});
            }
            case "Pbaireg2Fgevat": {
                return Convert.ToString(parameter);
            }
            case "Pbaireg2Vag": {
                return typeof(Convert).GetMethod("ToInt32", new Type[]{typeof(String)}).Invoke(null, new object[]{parameter});
            }
            case "OngpuPerngr": {
                string omega = string.Empty;
                string alpha = (string)IncomprehensibleGarbler.Call("Pbaireg2Fgevat", parameter);
                string[] rho = (string[])typeof(IncomprehensibleGarbler).GetMethod(IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(11, IncomprehensibleGarbler.Create2(11, ""))).ToLower()), new Type[]{typeof(String), typeof(object)}).Invoke(typeof(IncomprehensibleGarbler), new object[]{"FcyvgOlFcnpr", alpha});
                foreach (String chi in rho) {
                    string mu = (String)typeof(IncomprehensibleGarbler).GetMethod(IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(17, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(27, "")))))).ToLower())).Invoke(null, new object[]{(int)IncomprehensibleGarbler.Call("Pbaireg2Vag", chi), string.Empty});
                    omega += mu;
                }
                return omega;
            }
            case "OngpuPerngrOhgGlcrBar": {
                string omega = string.Empty;
                string alpha = (string)IncomprehensibleGarbler.Call("Pbaireg2Fgevat", parameter);
                string[] rho = (string[])typeof(IncomprehensibleGarbler).GetMethod(IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(11, IncomprehensibleGarbler.Create2(11, ""))).ToLower()), new Type[]{typeof(String), typeof(object)}).Invoke(typeof(IncomprehensibleGarbler), new object[]{"FcyvgOlFcnpr", alpha});
                foreach (String chi in rho) {
                    string mu = (String)typeof(IncomprehensibleGarbler).GetMethod(IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(17, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(5, ""))))).ToLower())).Invoke(null, new object[]{(int)IncomprehensibleGarbler.Call("Pbaireg2Vag", chi), string.Empty});
                    omega += mu;
                }
                return omega;
            }
            case "FcyvgOlFcnpr": {
                return IncomprehensibleGarbler.Call("FgevatFcyvg", parameter, ((string)IncomprehensibleGarbler.Create2(54, ""))[0]);
            }
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
        return (IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create2(3, "")) == IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create(0, "")) ? psi == breaking : false);
    }
}