#ifndef DEF_ENTITY
#define DEF_ENTITY

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
        void update(float time);

    private:

        Vector3 position;
        Object object;
};

#endif
