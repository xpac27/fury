#include "Camera.h"


Camera::Camera()
{
}

void Camera::draw(Entity* entities, int totalEntities)
{
    glPushMatrix();
    glColorMask(GL_ONE, GL_ONE, GL_ONE, GL_ONE);
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < totalEntities; i ++)
    {
        entities[i].draw();
    }

    glColorMask(GL_ZERO, GL_ZERO, GL_ZERO, GL_ZERO);
    glPopMatrix();
}

void Camera::update(float time)
{
}
