#include "Segment.h"

Segment::Segment(Vec2d* relativeCoord, Colour* colour)
{
	this->relativeCoord = relativeCoord;
	this->colour = colour;
}

Vec2d* Segment::getRelativeCoord()
{
	return relativeCoord;
}

void Segment::setRelativeCoord(Vec2d* relativeCoord)
{
	this->relativeCoord = relativeCoord;
}

Colour* Segment::getColour()
{
	return colour;
}