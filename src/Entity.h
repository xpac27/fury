#ifndef DEF_ENTITY
#define DEF_ENTITY

#include <iostream>
#include <SFML/OpenGL.hpp>
#include "Object.h"
#include "math/vmath.h"

class Entity
{
    public:

        Entity();
        Entity(float x, float y);

        float getX();
        float getY();
        void draw();
        virtual void update(float time);

    protected:

        Vector2f position;
        Object* object;
};

#endif
