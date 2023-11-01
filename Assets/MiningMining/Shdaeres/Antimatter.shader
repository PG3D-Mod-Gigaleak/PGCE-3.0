Shader "Custom/Antimatter" {
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _Illum ("Illumin (A)", 2D) = "white" {}
        _Emission ("Emission (Lightmapper)", Float) = 1.0
        _Speed ("Speed", Range(1.0, 15.0)) = 1.0
    }
    SubShader {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
        #pragma surface surf Lambert

        sampler2D _MainTex;
        sampler2D _Illum;
        fixed _Emission;
        float _Speed;

        struct Input {
            float2 uv_MainTex;
            float2 uv_Illum;
        };

        void surf (Input IN, inout SurfaceOutput o) {
            fixed4 tex = tex2D(_MainTex, IN.uv_MainTex);
            fixed4 illumTex = tex2D(_Illum, IN.uv_Illum);
            fixed4 c = tex;
            fixed4 illum = illumTex;
            o.Albedo = c.rgb;

            // Antimatter effect
            fixed t = sin(cos(_Time.y * _Speed));
            fixed3 color = lerp(fixed3(0, 0, 0), fixed3(1, 1, 1), 0.5 + 0.5 * t);
            o.Emission = illum.a * color;
        }
        ENDCG
    }
    FallBack "Legacy Shaders/Self-Illumin/VertexLit"
}
