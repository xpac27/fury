#ifndef DEF_CAMERA
#define DEF_CAMERA

#include <SFML/Graphics.hpp>
#include "Entity.h"

class Camera
{
    public:

        Camera();

        void update(float time);
        void draw(std::vector<Entity*> *entities);
        void setFocus(Entity *entity);

    private:

        Vector3 position;
        Entity* focus;

        float tolerance;
        float inertia;
};

#endif
