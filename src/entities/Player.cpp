#include "Player.h"

Player::Player(float x, float y) : Entity(x, y)
{
    speed = 30.f;
    direction.x = 1;
}

void Player::update(float time)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        position += direction * time * speed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        position -= direction * time * (speed / 2.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        direction.rotate(-0.05f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        direction.rotate(0.05f);
    }
}
