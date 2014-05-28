#include "Screens.h"
#include <iostream>
#include <string>

Screens::Screens(GLfloat width, GLfloat height)
{
	palette = Palette::getInstance();
	this->width = width;
	this->height = height;
}

void Screens::drawParagraph(string text, GLfloat height, GLfloat pixelSize)
{
	glPushMatrix();
	glColour3fv(palette->getPink()->getColour3fv());
	Text::writeCenteredParagraph(text, width, height, pixelSize);
	glPopMatrix();
}

GLfloat Screens::linebreak(GLfloat height, GLfloat pixelSize)
{
	return height + pixelSize * (Alphabet::CHARACTER_HEIGHT + 1.5);
}

void Screns::drawStartScreen(void)
{
	drawParagraph("SNAKE", height / 2, 20);
	drawParagraph("PRESS SPACE TO START", linebreak(height / 2, 20), 4);
}

void Screens::drawCompleteScreen(void)
{
	drawParagraph("CONGRATS!!!", height / 2, 10);
	drawParagraph("YOU COMPLETED SNAKE", linebreak(height / 2, 10), 4);
}

void Screens::drawDeadScreen(GLint count)
{
	drawParagraph("GAME OVER", height / 2, 10);
	
	if (count > 0)
	{
		drawParagraph(to_string(count), linebreak(height / 2, 10), 10)
	}
}