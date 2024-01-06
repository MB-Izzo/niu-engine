#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

extern "C" {
	// Example function 1
	DLL_EXPORT int add(int a, int b) {
		return a + b;
	}

	// Example function 2
	DLL_EXPORT double multiplyShit(int x, int y) {
		return x * y;
	}
}