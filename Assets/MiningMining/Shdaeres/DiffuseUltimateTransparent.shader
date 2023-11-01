Shader "Mobile/Transparent Diffuse+" {
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _Color ("Color", Color) = (1, 1, 1, 1)
        _ColorMult ("Color Multiplier", Range(1, 1000)) = 1
        _Gradient ("Has Gradient", Int) = 0
        _Gradient1 ("Gradient Top", Color) = (1, 1, 1, 1)
        _Gradient2 ("Gradient Bottom", Color) = (1, 1, 1, 1)
        _GradientMover ("Gradient Position", Range(0, 5)) = 1
        _GradientSmooth ("Gradient Smoothing", Range(0, 5)) = 1
    }
    SubShader {
        Tags { "RenderType"="Transparent" "Queue"="Transparent" }
        LOD 150

        CGPROGRAM
        #pragma surface surf Standard alpha

        sampler2D _MainTex;
        fixed4 _Color;
        float _ColorMult;
        int _Gradient;
        fixed4 _Gradient1;
        fixed4 _Gradient2;
        float _GradientSmooth;
        float _GradientMover;

        struct Input {
            float2 uv_MainTex;
        };

        void surf (Input IN, inout SurfaceOutputStandard o) {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            fixed4 color = _Color * _ColorMult;
            if (_Gradient == 1)
            {
                float gradient = IN.uv_MainTex.y;
                gradient = smoothstep(_Gradient1.a - _GradientMover, _Gradient1.a + _GradientMover, gradient);
                color = lerp(_Gradient2, _Gradient1, gradient * _GradientSmooth) * color;
            }
            o.Albedo = c.rgb * color;
            o.Alpha = c.a * _Color.a;
        }
        ENDCG
    }
    Fallback "Mobile/VertexLit"
}
