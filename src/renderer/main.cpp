#include <glad/glad.h>
#include <GLFW/glfw3.h>

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

extern "C" {
	// Example function 1
	DLL_EXPORT int adde(int a, int b) {
		return a + b;
	}

	// Example function 2
	DLL_EXPORT double multiplye(double x, double y) {
		return x * y;
	}
}
