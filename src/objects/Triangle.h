#ifndef DEF_OBJECTS_TRIANGLE
#define DEF_OBJECTS_TRIANGLE

#include <SFML/OpenGL.hpp>
#include "../Object.h"

class Triangle:public Object
{
    public:

        Triangle();

    protected:

        void drawShape();
};

#endif
