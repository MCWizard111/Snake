#ifndef snake_Coordinated_h
#define snake_Coordinated_h

#include "../foundation/Vec2d.h"

class Coordinated
{
public:
	Coordinated(){}
	virtual ~Coordinated(){}
	
	virtual Vec2d* getCoords() = 0;
	virtual void setCoords(Vec2d* coords) = 0;
	virtual void setCoords(GLint x, GLint y) = 0;
};

#endif