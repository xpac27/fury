#include "Triangle.h"

Triangle::Triangle() : Object()
{
}

void Triangle::drawShape()
{
    glBegin(GL_TRIANGLES);
    glColor4f(1.f, 1.f, 0.f, 1.f);
        glVertex3f(-1.f, -1.f, 0.f);
        glVertex3f(0.f, 1.f, 0.f);
        glVertex3f(1.f, -1.f, 0.f);
    glEnd();
}

