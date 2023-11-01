Shader "Custom/HologramGlitch" {
    Properties {
        _MainTex ("Texture", 2D) = "white" {}
        _Color ("Color", Color) = (1,1,1,1)
        _Frequency ("Frequency", Range(0.0, 10000.0)) = 1.0
        _Amplitude ("Amplitude", Range(0.0, 500)) = 0.1
        _Speed ("Speed", Range(-10.0, 10000.0)) = 1.0
        _Tiling ("Tiling", Range(1, 100)) = 1
    }

    SubShader {
        Tags {"Queue"="Transparent" "RenderType"="Transparent"}
        LOD 100

        Pass {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _Color;
            float _Frequency;
            float _Amplitude;
            float _Speed;
            float _Tiling;

            v2f vert (appdata v) {
                v.vertex.xyz += sin(_Time.y * _Speed + v.vertex.y * _Frequency) * _Amplitude;
                v.uv *= _Tiling;
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target {
                fixed4 col = tex2D(_MainTex, i.uv) * _Color;
                return col;
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}
