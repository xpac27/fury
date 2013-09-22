#include "Game.h"

Game::Game()
{
    totalEntities = 1;
    entities = new Entity[totalEntities];
    entities[0] = Entity(10.f, 10.f);
}

void Game::draw()
{
    camera.draw(entities, totalEntities);
}

void Game::update(float time)
{
    for (int i = 0; i < totalEntities; i ++)
    {
        entities[i].update(time);
    }
    camera.update(time);
}
