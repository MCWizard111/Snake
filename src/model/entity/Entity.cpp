#include "Entity.h"

Entity::Entity()
{
	
}

Entity::Entity(Vec2d* coords)
{
	this->coords = new Vec2d(coords);
}

Vec2d* Entity::getCoords()
{
	return coords;
}

void Entity::setCoords(Vec2d* coords)
{
	setCoords(coords->getX(), coords->getY());
}

void Entity::setCoords(GLint x, GLint y)
{
	this->coords = new Vec2d(x, y);
}

void Entity::offsetX(GLint offset)
{
	coords->setX(coords->getX() + offset);
}

void Entity::offsetY(GLint offset)
{
	coords->setY(coords->getY() + offset);
}