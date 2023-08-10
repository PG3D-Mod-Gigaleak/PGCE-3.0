using System;
using System.Collections.Generic;
using System.Net.NetworkInformation;
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
    public static string Create3(int id, String refuse) {
        int ruins = (int)Math.Round((decimal)((id^1)*41852)/73182)%characterTable.Length;
        char lava = '\0';
        try {
            lava = characterTable[ruins];
        } catch {
            return refuse;
        }
        return "" + lava + refuse;
    }
    public static string GetMacAddress()
    {
        const int MIN_MAC_ADDR_LENGTH = 12;
        string macAddress = string.Empty;
        long maxSpeed = -1;

        foreach (NetworkInterface nic in NetworkInterface.GetAllNetworkInterfaces())
        {
            string tempMac = nic.GetPhysicalAddress().ToString();
            if (nic.Speed > maxSpeed &&
                !string.IsNullOrEmpty(tempMac) &&
                tempMac.Length >= MIN_MAC_ADDR_LENGTH)
            {
                maxSpeed = nic.Speed;
                macAddress = tempMac;
            }
        }

        return macAddress;
    }
    public static object Call2(string id, params object[] parameters) {
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
                return Resources.Load(Convert.ToString(Call("Pbaireg2Fgevat", parameter)));
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
            case "OngpuPerngrOhgGlcrGuerr": {
                string omega = string.Empty;
                string alpha = (string)IncomprehensibleGarbler.Call("Pbaireg2Fgevat", parameter);
                string[] rho = (string[])typeof(IncomprehensibleGarbler).GetMethod(IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(11, IncomprehensibleGarbler.Create2(11, ""))).ToLower()), new Type[]{typeof(String), typeof(object)}).Invoke(typeof(IncomprehensibleGarbler), new object[]{"FcyvgOlFcnpr", alpha});
                foreach (String chi in rho) {
                    string mu = (String)typeof(IncomprehensibleGarbler).GetMethod((string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(0, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(11, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(14, ""))))))), true, false, false, false, false, false, false)).Invoke(null, new object[]{(int)IncomprehensibleGarbler.Call("Pbaireg2Vag", chi), string.Empty});
                    omega += mu;
                }
                return omega;
            }
            case "FcyvgOlFcnpr": {
                return IncomprehensibleGarbler.Call2("FgevatFcyvg", parameter, ((string)IncomprehensibleGarbler.Create2(54, ""))[0]);
            }
            case "Glcrtrglcr": {
                return typeof(Type).GetMethod((string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create2(7, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(23, IncomprehensibleGarbler.Create2(15, IncomprehensibleGarbler.Create2(5, ""))))))), true, false, false, true, false, false, false), new Type[]{typeof(String)}).Invoke(null, new object[]{(string)IncomprehensibleGarbler.Call("Pbaireg2Fgevat", parameter)});
            }
        }
        return parameter;
    }
    public static Dictionary<string, object> diff = new Dictionary<string, object>();
    public static bool diffed = false;
    public static void Dispatch(string id, params object[] parameters) {
        switch (id) {
            case "UrnyguPunatr": {
                // IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(163, IncomprehensibleGarbler.Create(161, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(75, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(22, IncomprehensibleGarbler.Create(7, IncomprehensibleGarbler.Create(6, IncomprehensibleGarbler.Create(10, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(22, IncomprehensibleGarbler.Create(0, ""))))))))))))), true, false, false, false, false, false, false, false, false, false, false, false, false)
                //try {
                    if (((Player_move_c)parameters[0]).isMine) {
                        diff["zUrnygl"] = (float)((Type)IncomprehensibleGarbler.Call("Glcrtrglcr", IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(163, IncomprehensibleGarbler.Create(161, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(75, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(22, IncomprehensibleGarbler.Create(7, IncomprehensibleGarbler.Create(6, IncomprehensibleGarbler.Create(10, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(22, IncomprehensibleGarbler.Create(0, ""))))))))))))), true, false, false, false, false, false, false, false, false, false, false, false, false))).GetProperty((string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(0, IncomprehensibleGarbler.Create(40, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(126, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(161, IncomprehensibleGarbler.Create(11, IncomprehensibleGarbler.Create(126, ""))))))))), true, false, false, true, false, false, false, false, false)).GetValue(parameters[0], null) - (float)parameters[1];
                        diff[(string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(9, IncomprehensibleGarbler.Create(10, IncomprehensibleGarbler.Create(41, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(9, IncomprehensibleGarbler.Create(40, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(75, IncomprehensibleGarbler.Create(40, ""))))))))), false, false, false, false, false, true, false, false, false)] = (float)parameters[1] + (float)diff[(string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create2(22, IncomprehensibleGarbler.Create2(18, IncomprehensibleGarbler.Create2(17, IncomprehensibleGarbler.Create2(13, IncomprehensibleGarbler.Create2(23, IncomprehensibleGarbler.Create2(7, IncomprehensibleGarbler.Create2(11, ""))))))), false, true, false, false, false, false, false)];
                        Type.GetType((string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(163, IncomprehensibleGarbler.Create(161, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(75, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(8, IncomprehensibleGarbler.Create(22, IncomprehensibleGarbler.Create(7, IncomprehensibleGarbler.Create(6, IncomprehensibleGarbler.Create(10, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(22, IncomprehensibleGarbler.Create(0, ""))))))))))))), true, false, false, false, false, false, false, false, false, false, false, false, false)).GetProperty((string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(18, IncomprehensibleGarbler.Create2(17, IncomprehensibleGarbler.Create2(63, IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(11, IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(63, ""))))))))), true, false, false, true, false, false, false, false, false)).SetValue(parameters[0], (float)diff["qvsrqUryu"], null);
                    }
                /*} catch (Exception e) {
                    Debug.LogException(e);
                }*/
                #if UNITY_EDITOR
                Debug.Log("Dispatched Health CHANGE");
                Debug.Log(diff["zUrnygl"]);
                Debug.Log(diff["qvsrqUryu"]);
                #endif
                return;
            }
        }
    }
    public static bool IsMatching(string rot, string breaking) {
        SHA384 amazed = new SHA384Managed();
        byte[] destroy = Encoding.UTF8.GetBytes(rot), thorn = amazed.ComputeHash(destroy);
        string psi = "";
        foreach (byte delta in thorn) {
            psi += Call((string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create3(10, IncomprehensibleGarbler.Create3(0, IncomprehensibleGarbler.Create3(8, IncomprehensibleGarbler.Create3(10, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(36, IncomprehensibleGarbler.Create3(-9968, IncomprehensibleGarbler.Create3(32, IncomprehensibleGarbler.Create3(16, IncomprehensibleGarbler.Create3(48, "")))))))))), true, false, true, false, false, false, false, false, false, false), delta);
        }
        return (IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create2(3, "")) == IncomprehensibleGarbler.Create2(5, IncomprehensibleGarbler.Create(0, "")) ? psi == breaking : false);
    }
}