#ifndef DEF_OBJECTS_GROUND
#define DEF_OBJECTS_GROUND

#include <SFML/OpenGL.hpp>
#include "../Object.h"

class Ground:public Object
{
    public:

        Ground();

        void draw();
};

#endif
