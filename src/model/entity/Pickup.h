#ifndef __snake__Pickup__
#define __snake__Pickup__

#include <vector>
#include "Entity.h"
#include "../foundation/Colour.h"
#include "Collidable.h"
#include "Drawable.h"

using namespace std;

class Pickup : public Collidable, public Drawable, public Entity
{
private:
	vector<Segment*> segments;
	
public:
	Pickup(Vec2d* coords, Colour* colour);
	Colour* getColour();
	bool collidesWith(Vec2d* coords);
	vector<Segment*>* getMesh();
};

#endif