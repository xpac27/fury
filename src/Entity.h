#ifndef DEF_ENTITY
#define DEF_ENTITY

#include <iostream>
#include <SFML/OpenGL.hpp>
#include "Object.h"
#include "math/Vector3.h"

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

        Vector3 position;
        Object* object;
};

#endif
