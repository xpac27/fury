#include "Ground.h"

Ground::Ground() : Object()
{
}

void Ground::drawShape()
{
    glBegin(GL_LINES);
    glColor4f(0.f, 1.f, 0.f, 0.2f);
    float space = 2.f;
    for (int i = 0; i < 100; i ++)
    {
        glVertex3f(i * space, 0.f, 0.f);
        glVertex3f(i * space, space * 100.f, 0.f);
        glVertex3f(0.f, i * space, 0.f);
        glVertex3f(space * 100.f, i * space, 0.f);
    }
    glEnd();
}
