Shader "Custom/Void" {
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
            fixed t = sin(cos(_Time.y * _Speed));
            fixed3 color = lerp(fixed3(-2, -2, -2), fixed3(-0.3, -2, -0.3), 0.5 + 0.5 * t);
            o.Emission = illum.a * color;
        }
        ENDCG
    }
    FallBack "Legacy Shaders/Self-Illumin/VertexLit"
}
