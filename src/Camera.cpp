#include "Camera.h"


Camera::Camera()
{
    tolerance = 3.f;
    inertia = 0.1f;
    position.x = position.y = 0.f;
}

void Camera::draw(std::vector<Entity*> *entities)
{
    glPushMatrix();
    glTranslatef(position.x * -1.f,  position.y * -1.f, 0.f);
    glColorMask(GL_ONE, GL_ONE, GL_ONE, GL_ONE);
    glEnable(GL_BLEND);
    glClear(GL_COLOR_BUFFER_BIT);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    for (int i = 0; i < entities->size(); i ++)
    {
        entities->at(i)->draw();
    }

    glColorMask(GL_ZERO, GL_ZERO, GL_ZERO, GL_ZERO);
    glDisable(GL_BLEND);
    glPopMatrix();
}

void Camera::update(float time)
{
    if (position.x - focus->getX() > tolerance)
    {
        position.x -= (position.x - (focus->getX() + tolerance)) / (inertia / time);
    }
    else if (focus->getX() - position.x > tolerance)
    {
        position.x += ((focus->getX() - tolerance) - position.x) / (inertia / time);
    }

    if (position.y - focus->getY() > tolerance)
    {
        position.y -= (position.y - (focus->getY() + tolerance)) / (inertia / time);
    }
    else if (focus->getY() - position.y > tolerance)
    {
        position.y += ((focus->getY() - tolerance) - position.y) / (inertia / time);
    }
}

void Camera::setFocus(Entity *entity)
{
    focus = entity;
    position.x = focus->getX();
    position.y = focus->getY();
}
