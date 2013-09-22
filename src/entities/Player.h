#ifndef DEF_ENTITIES_PLAYER
#define DEF_ENTITIES_PLAYER

#include <SFML/Graphics.hpp>
#include "../Entity.h"

class Player:public Entity
{
    public:

        Player(float x, float y);

        void update(float time);

    private:

        float speed;
};

#endif
