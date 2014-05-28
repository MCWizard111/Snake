#ifndef __snake_Gameplay__
#define __snake_Gameplay__

#include "GLFW/glfw3.h"
#include "Primitive.h"
#include "../model/entity/Drawable.h"

class Gameplay
{
public:
	static void drawPause(GLfloat width);
	static void draw(Drawable*);
	static void draw(Drawable*, GLint);
};

#endif