#pragma once
#include <entt/entt.hpp>

namespace sf {
    class Event;
    class Time;
}

class Game
{
public:
    virtual int run() = 0;
    virtual int event(sf::Event& event) = 0;
    virtual int update(const sf::Time& deltaTime) = 0;
    virtual int render() = 0;

};

