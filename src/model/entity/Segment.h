#ifndef __snake__Segment__
#define __snake__Segment__

#include "../foundation/Vec2d.h"
#include "../foundation/Colour.h"

class Segment
{
private:
	Colour* colour;
	Vec2d* relativeCoord;
	
public:
	Segment(Vec2d*, Colour*);
	Vec2d* getRelativeCoord();
	void setRelativeCoord(Vec2d* relativeCoord);
	Colour* getColour();
};

#endif