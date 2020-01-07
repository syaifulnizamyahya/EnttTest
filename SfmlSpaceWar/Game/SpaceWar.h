#pragma once
#include "Game.h"

class SpaceWar : public Game
{
public:
    SpaceWar();
    ~SpaceWar() = default;

    int run() override;
    int event(sf::Event& event) override;
    int update(const sf::Time& deltaTime) override;
    int render() override;
};


