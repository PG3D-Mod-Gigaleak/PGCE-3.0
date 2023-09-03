Shader "AngryBots/ReflectiveBackgroundPlanarGeometry" {
	Properties {
		_MainTex ("Base", 2D) = "white" {}
		_Cube ("Cube", Cube) = "" {}
		_2DReflect ("2D Reflection", 2D) = "" {}
		_Normal ("Normal", 2D) = "bump" {}
		_EmissionLM ("Emission (Lightmapper)", Float) = 0
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