#include <emscripten.h>

extern "C"
{
	EMSCRIPTEN_KEEPALIVE
	float add(float a, float b) {
		return a + b;
	}
	EMSCRIPTEN_KEEPALIVE
	float get (int *x) {
		return *x;
	}
}