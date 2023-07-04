Shader "Custom/LightwarpShader" {
    Properties {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _NormalMap ("Normal Map", 2D) = "bump" {}
        _LightwarpTex ("Lightwarp Texture", 2D) = "white" {}
        _LightColor ("Light Color", Color) = (1, 1, 1, 1)
        _LightIntensity ("Light Intensity", Range(0, 2)) = 1
    }
 
    SubShader {
        Tags {"Queue"="Transparent" "RenderType"="Transparent"}
        LOD 200

        CGPROGRAM
        #pragma surface surf Lambert

        sampler2D _MainTex;
        sampler2D _NormalMap;
        sampler2D _LightwarpTex;
        fixed4 _LightColor;
        float _LightIntensity;

        struct Input {
            float2 uv_MainTex;
            float3 worldNormal;
        };

        void surf (Input IN, inout SurfaceOutput o) {
            fixed4 albedo = tex2D(_MainTex, IN.uv_MainTex);
            fixed3 normal = UnpackNormal(tex2D(_NormalMap, IN.uv_MainTex));

            // Calculate the light direction based on the world normal
            fixed3 lightDir = normalize(float3(0.5, 0.5, -1)); // Example light direction

            // Calculate the light intensity based on the dot product of the normal and light direction
            float lightIntensity = saturate(dot(normal, lightDir));

            // Sample the lightwarp texture based on the light intensity
            fixed4 lightwarp = tex2D(_LightwarpTex, float2(lightIntensity, 0));

            // Apply the lightwarp texture to the final color
            fixed3 lightColor = _LightColor.rgb * _LightIntensity;
            fixed3 finalColor = albedo.rgb * lightwarp.rgb * lightColor;

            o.Albedo = finalColor;
            o.Normal = normal;
            o.Alpha = albedo.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}