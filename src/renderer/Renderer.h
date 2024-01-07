#pragma once

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

class  TestClass {
public:
	TestClass() {};
	~TestClass() {};

	DLL_EXPORT void load(void* proc);
	 DLL_EXPORT void initStuff();
	 DLL_EXPORT void renderStuff();
	 DLL_EXPORT void cleanUp();

private:
	unsigned int shaderProgram;
	unsigned int VBO, VAO, EBO;
};