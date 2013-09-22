#include "Game.h"

Game::Game()
{
    entities.push_back(new Map());
    entities.push_back(new Player(80.f, 80.f));
    camera.setFocus(entities[1]);
}

void Game::draw()
{
    camera.draw(&entities);
}

void Game::update(float time)
{
    for (int i = 0; i < entities.size(); i ++)
    {
        entities[i]->update(time);
    }
    camera.update(time);
}
