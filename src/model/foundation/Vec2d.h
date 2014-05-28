#ifndef __snake_Vec2d__
#define __snake_Vec2d__

#include <iostream>
#include <string>
#include <sstream>
#include <GLFW/glfw3.h>

using namespace std;

class Vec2d
{
private:
	GLint x;
	GLint y;
	
public:
	static Vec2d *UP, *DOWN, *LEFT, *RIGHT, *ORIGIN;
	
	void setX(GLint x);
	void setY(GLint y);
	void setCoords(GLint x, GLint y);
	void setCoords(Vec2d* coords);
	GLint getX();
	GLint getY();
	Vec2d* getInverse();
	Vec2d* getOffset(Vec2d*);
	void applyOffset(Vec2d*);
	Vec2d* getScale(GLfloat);
	Vec2d* applyScale(GLfloat);
	
	Vec2d(GLint x, GLint y);
	Vec2d(Vec2d* coords);
	
	bool equals(Vec2d* other);
	string* toString();
};

#endif