#include "Pickup.h"

Pickup::Pickup(Vec2d* coords, Colour* colour): Entity(coords)
{
	segments = vector<Segment*>();
	segments.push_back(new Segment(Vec2d::ORIGIN, colour));
}

Colour* Pickup::getColour()
{
	return segments.front()->getColour();
}

bool Pickup::collidesWith(Vec2d *coords)
{
	return this->coords->equals(coords);
}

vector<Segment*>* Pickup::getMesh()
{
	return &segments;
}