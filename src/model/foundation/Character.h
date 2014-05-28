#ifndef __snake_Character__
#define __snake_Character__

#include <iostream>

class Character
{
private:
	bool** pixels;
public:
	Character(bool**);
	bool** getPixels();
};

#endif