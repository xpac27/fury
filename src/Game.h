#ifndef DEF_GAME
#define DEF_GAME

#include "Camera.h"
#include "Entity.h"
#include "entities/Player.h"
#include "entities/Map.h"

class Game
{
    public:

        Game();

        void draw();
        void update(float time);

    private:

        Camera camera;
        std::vector<Entity*> entities;
};

#endif
