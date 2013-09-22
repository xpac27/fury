#include "Entity.h"

Entity::Entity()
{
    position.x = position.y = 0.f;
    object = new Object();
}

Entity::Entity(float x, float y)
{
    position.x = x;
    position.y = y;
    object = new Object();
}

void Entity::draw()
{
    glPushMatrix();
    glTranslatef(position.x, position.y, 0.f);
    object->draw();
    glPopMatrix();
}

void Entity::update(float time)
{
}

float Entity::getX() { return position.x; }
float Entity::getY() { return position.y; }
