#pragma once

#include <GL/glew.h>
#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCALL(x) GLClearError();\
x;\
ASSERT(GLLogCall(#x,__FILE__,__LINE__));

//g++ *.cpp -lglfw -lGL -lGLU -lglut -lGLEW -o run && ./run

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

