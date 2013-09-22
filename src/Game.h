#ifndef DEF_GAME
#define DEF_GAME

#include "Camera.h"
#include "Entity.h"

class Game
{
    public:

        Game();

        void draw();
        void update(float time);

    private:

        Camera camera;
        Entity* entities;
        int totalEntities;
};

#endif
