#ifndef __Snake__Colour__
#define __Snake__Colour__

#include <iostream>
#include <string>
#include <sstream>
#include <GLFW/glfw3.h>

using namespace std;

class Colour
{
private:
	int r, g, b;
	
public:
	Colour(int r, int g, int b);
	Colour(float r, float g, float b);
	Colour(int hex);
	
	float getR();
	float getG();
	float getB();
	
	GLfloat* getColour3fv();
};

#endif