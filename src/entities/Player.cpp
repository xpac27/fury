#include "Player.h"

Player::Player(float x, float y) : Entity(x, y)
{
    speed = 30.f;
    object = new Triangle();
    angle = object->angle;
    rotation.angle(angle);
}

void Player::update(float time)
{
    bool move = false;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        move = true;
        angle = 180.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) angle -= 45.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) angle += 45.f;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        move = true;
        angle = 0.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) angle += 45.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) angle -= 45.f;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        move = true;
        angle = 90.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) angle += 45.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) angle -= 45.f;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        move = true;
        angle = 270.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) angle -= 45.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) angle += 45.f;
    }

    if (move)
    {
        if (abs(fmod(angle - object->angle, 360.f)) > 5.f)
        {
            object->angle += object->angle > angle + 180 ? -360 : 360;
            object->angle += (angle + 180 - object->angle) / 20.f;
        }
        else
        {
            object->angle = angle;
        }
        rotation.angle(angle);
        position += rotation * time * speed;
    }

}
