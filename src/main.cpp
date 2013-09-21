#include "config.h"
#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

void setupWindow(float width, float height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (width > height)
    {
        glOrtho(0.f, 100, 100 * (height / width), 0.f, 0.f, 1.f);
    }
    else if (width == height)
    {
        glOrtho(0.f, 100, 100, 0.f, 0.f, 1.f);
    }
    else
    {
        glOrtho(0.f, 100 * (width / height), 100, 0.f, 0.f, 1.f);
    }
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main()
{
    cout << "Version " << FURY_VERSION_MAJOR << "." << FURY_VERSION_MINOR << endl;

    sf::RenderWindow window(sf::VideoMode(800, 600), "fury", (sf::Style::Close | sf::Style::Resize));
    window.clear(sf::Color::Black);

    glShadeModel(GL_SMOOTH);
    glCullFace(GL_FRONT);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_STENCIL_TEST);
    glDepthMask(GL_FALSE);
    glColorMask(GL_ZERO, GL_ZERO, GL_ZERO, GL_ZERO);
    glClearDepth(GL_ONE);
    glClearStencil(GL_ZERO);
    glClearColor(GL_ZERO, GL_ZERO, GL_ZERO, GL_ZERO);

    setupWindow(800, 600);

    while (window.isOpen())
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();

        sf::Event Event;
        while (window.pollEvent(Event))
        {
            if (Event.type == sf::Event::Closed)
                window.close();
            if (Event.type == sf::Event::Resized)
                setupWindow(Event.size.width, Event.size.height);
        }

        glLoadIdentity();

        glColorMask(GL_ONE, GL_ONE, GL_ONE, GL_ONE);
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
            glColor4f(1.f, 1.f, 1.f, 1.f);
            glVertex3f(0.f, 0.f, 0.f);
            glVertex3f(0.f, 10.f, 0.f);
            glVertex3f(10.f, 0.f, 0.f);
        glEnd();

        glColorMask(GL_ZERO, GL_ZERO, GL_ZERO, GL_ZERO);

        window.display();
    }
}
