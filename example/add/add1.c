#include <emscripten.h>

extern "C"
{
	EMSCRIPTEN_KEEPALIVE
	float add1(float a, float b) {
		return a + b;
	}
	EMSCRIPTEN_KEEPALIVE
	float get1 (int *x) {
		return *x;
	}
}