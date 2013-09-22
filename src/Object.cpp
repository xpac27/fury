#include "Object.h"

Object::Object()
{
    angle = 0.f;
}

void Object::draw()
{
    glPushMatrix();
    glRotatef(angle, 0.f, 0.f, 1.f);
    drawShape();
    glPopMatrix();
}

void Object::drawShape()
{
    glBegin(GL_TRIANGLES);
        glColor4f(1.f, 1.f, 1.f, 1.f);
        glVertex3f(0.f, 0.f, 0.f);
        glVertex3f(0.f, 1.f, 0.f);
        glVertex3f(1.f, 0.f, 0.f);
        glVertex3f(1.f, 1.f, 0.f);
        glVertex3f(1.f, 0.f, 0.f);
        glVertex3f(0.f, 1.f, 0.f);
    glEnd();
}
