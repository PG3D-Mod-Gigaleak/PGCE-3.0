Shader "Mobile/OverlayWave" {
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _OverlayTex ("Overlay (RGBA)", 2D) = "black" {}
        _OverlayStrength ("Overlay Strength", Range(0, 1)) = 0.5
        _WaveSpeed ("Wave Speed", Range(0, 10)) = 1
        _WaveAmplitude ("Wave Amplitude", Range(0, 1)) = 0.1
        _OverlayTiling ("Overlay Tiling", Range(1, 1000)) = 1
    }

    SubShader {
        Tags { "RenderType"="Opaque" }
        LOD 150

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
            sampler2D _OverlayTex;
            float _OverlayStrength;
            float _WaveSpeed;
            float _WaveAmplitude;
            float _OverlayTiling;

            v2f vert (appdata v) {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target {
                // Sample the base color
                fixed4 baseColor = tex2D(_MainTex, i.uv);

                // Calculate the wave offset based on time and UV coordinates
                float2 waveOffset = float2(
                    sin(_Time.y * _WaveSpeed + i.uv.x * _WaveAmplitude),
                    cos(_Time.y * _WaveSpeed + i.uv.y * _WaveAmplitude)
                ) * 0.05; // Scale the wave offset for a more subtle effect

                // Apply the wave offset to the overlay UV coordinates
                float2 distortedUV = i.uv + waveOffset;

                // Scale the overlay UV coordinates by the tiling factor
                distortedUV *= _OverlayTiling;

                // Sample the distorted overlay color
                fixed4 distortedOverlayColor = tex2D(_OverlayTex, distortedUV);

                // Interpolate between base color and distorted overlay color based on overlay strength
                fixed4 col;
                col.rgb = lerp(baseColor.rgb, distortedOverlayColor.rgb, distortedOverlayColor.a * _OverlayStrength);
                col.a = baseColor.a;
                return col;
            }
            ENDCG
        }
    }

    FallBack "Mobile/VertexLit"
}