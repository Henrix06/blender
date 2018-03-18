
in vec4 uvcoordsvar;
out vec4 fragColor;

uniform vec2 invscreenres;
uniform sampler2D colortex;

void main()
{
	fragColor = FxaaPixelShader(
		uvcoordsvar.st,
		colortex,
		invscreenres,
		1.0,
		0.166,
		0.0833
	);
}
