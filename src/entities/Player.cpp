#include "Player.h"

Player::Player(float x, float y) : Entity(x, y)
{
    speed = 30.f;
    object = new Triangle();
    rotation.angled(object->angle);
}

void Player::update(float time)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        position += rotation * time * speed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        position -= rotation * time * (speed / 2.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        object->angle -= 2.f;
        rotation.angled(object->angle);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        object->angle += 2.f;
        rotation.angled(object->angle);
    }
}
