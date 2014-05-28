#ifndef snake_Screens_h
#define snake_Screens_h

#include "GLFW/glfw3.h"
#include "Text.h"
#include "../drawing/Palette.h"
#include "../drawing/Alphabet.h"

class Screens
{
private:
	Palette* palette;
	GLfloat width, height;
	void drawParagraph(string text, GLfloat height, GLfloat pixelSize);
	GLfloat linebreak(GLfloat height, GLfloat pixelSize);
	
public:
	Screens(GLfloat width, GLfloat height);
	void drawStartScreen(void);
	void drawCompleteScreen(void);
	void drawDeadScreen(GLint count);
};

#endif