Shader "Mobile/Transparent/Diffuse" {
Properties {
    _MainTex ("Base (RGB)", 2D) = "white" {}
    _Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
}
SubShader {
    Tags { "Queue"="AlphaTest" "IgnoreProjector"="True" "RenderType"="TransparentCutout" }
    LOD 150
    Blend SrcAlpha OneMinusSrcAlpha
CGPROGRAM
#pragma surface surf Lambert noforwardadd

sampler2D _MainTex;
fixed _Cutoff;

struct Input {
    float2 uv_MainTex;
};

void surf (Input IN, inout SurfaceOutput o) {
    fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
    clip(c.a - _Cutoff);
    o.Albedo = c.rgb;
    o.Alpha = c.a;
}
ENDCG
}

Fallback "Mobile/VertexLit"
}
