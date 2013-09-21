#include "config.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    cout << "Version " << FURY_VERSION_MAJOR << "." << FURY_VERSION_MINOR << endl;

    sf::Window App(sf::VideoMode(800, 600), "fury");

    while (App.isOpen())
    {
        sf::Event Event;
        while (App.pollEvent(Event))
        {
            if (Event.type == sf::Event::Closed)
                App.close();
        }
        App.display();
    }
}
