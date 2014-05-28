#ifndef __snake_Entity__
#define __snake_Entity__

#include <GLFW/glfw3.h>
#include "../foundation/Vec2d.h"
#include "Coordinated.h"

using namespace std;

class Entity : public virtual Coordinated
{
protected:
	Vec2d* coords;
	
public:
	Entity();
	Entity(Vec2d*);
	Vec2d* getCoords();
	void setCoords(Vec2d* coords);
	void setCoords(GLint x, GLint y);
	void offsetX(GLint);
	void offsetY(GLint);
};

#endif