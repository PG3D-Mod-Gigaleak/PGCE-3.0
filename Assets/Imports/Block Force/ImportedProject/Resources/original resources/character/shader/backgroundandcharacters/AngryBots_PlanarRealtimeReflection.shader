Shader "AngryBots/PlanarRealtimeReflection" {
	Properties {
		_MainTex ("Base", 2D) = "white" {}
		_ReflectionTex ("Internal reflection", 2D) = "black" {}
		_CubeReflTex ("Cube", Cube) = "black" {}
		_Normals ("Normal", 2D) = "bump" {}
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType"="Opaque" }
		LOD 200
		CGPROGRAM
#pragma surface surf Standard
#pragma target 3.0

		sampler2D _MainTex;
		struct Input
		{
			float2 uv_MainTex;
		};

		void surf(Input IN, inout SurfaceOutputStandard o)
		{
			fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
			o.Albedo = c.rgb;
			o.Alpha = c.a;
		}
		ENDCG
	}
	Fallback "AngryBots/Fallback"
}