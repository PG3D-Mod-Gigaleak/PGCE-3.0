Shader "Custom/Ultramatter" {
    Properties {
        _MainTex ("Texture", 2D) = "white" {}
        _Frequency ("Frequency", Range(0.0, 10000.0)) = 1.0
        _Amplitude ("Amplitude", Range(0.0, 500)) = 0.1
        _MoveSpeed ("Move Speed", Range(-10.0, 10000.0)) = 1.0
        _Tiling ("Tiling", Range(1, 100)) = 1
        _Speed ("Speed", Range(0, 10)) = 1.0
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

            fixed4 hsv2rgb (fixed3 c)
            {
                fixed4 K = fixed4(1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0);
                fixed3 p = abs(frac(c.xxx + K.xyz) * 6.0 - K.www); 
                fixed3 the = c.z * lerp(K.xxx, clamp(p - K.xxx, 0.0, 1.0), c.y);
                return fixed4(the.x, the.y, the.z, 0);
            }

            sampler2D _MainTex;
            float _Frequency;
            float _Amplitude;
            float _MoveSpeed;
            float _Tiling;
            float _Speed;

            v2f vert (appdata v) {
                v.vertex.xyz += sin(_Time.y * _MoveSpeed + v.vertex.y * _Frequency) * _Amplitude;
                v.uv *= _Tiling;
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target {
                fixed4 tex = tex2D(_MainTex, i.uv);
                float t = _Time.y * _Speed;
                fixed4 hsv = fixed4(t, 1.0, 1.0, 0); // Rainbow effect in HSV color space
                fixed4 rgb = hsv2rgb(hsv);
                fixed4 col = fixed4(tex.rgb.x, tex.rgb.y, tex.rgb.z, 0) * rgb;
                return col;
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}
