#ifndef DEF_OBJECT
#define DEF_OBJECT

#include <SFML/OpenGL.hpp>
#include "math/vmath.h"

class Object
{
    public:

        Object();

        float angle;

        void draw();

    protected:

        virtual void drawShape();
};

#endif
