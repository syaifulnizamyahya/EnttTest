#include "SpaceWar.h"

#include <spdlog/spdlog.h>
#include <SFML/Graphics.hpp>
#include <Thor/Resources.hpp>

#include "Singleton.hpp"
#include "../Systems/DecaySystem.hpp"
#include "../Components/DecayComponent.hpp"
#include "../Components/DecayElapsedComponent.hpp"

SpaceWar::SpaceWar()
{
}

int SpaceWar::run()
{
    sf::Clock clock;
    const auto singleton = Singleton::getInstance();
    auto window = singleton->getWindow();

    auto timelapse = 0;
    auto ent1 = false;
    auto ent2 = false;
    auto ent3 = false;

    while (window->isOpen())
    {
        auto deltaTime = clock.restart();
        deltaTime = sf::milliseconds(16); // force time

        Singleton* singleton = Singleton::getInstance();
        auto registry = &singleton->mRegistry;

        // create 1st entity
        if (!ent1)
        {
            const auto entity = registry->create<>();
            registry->assign<DecayComponent>(entity, sf::milliseconds(1000));
            registry->assign<DecayElapsedComponent>(entity);
            ent1 = true;
            spdlog::debug("Ent1 {} created", entity);
        }
        // create 2nd entity 0.3 seconds later
        if (!ent2 && timelapse>300)
        {
            const auto entity = registry->create<>();
            registry->assign<DecayComponent>(entity, sf::milliseconds(1000));
            registry->assign<DecayElapsedComponent>(entity);
            ent2 = true;
            spdlog::debug("Ent2 {} created", entity);
        }
        // create 2nd entity 0.6 seconds later
        if (!ent3 && timelapse > 600)
        {
            const auto entity = registry->create<>();
            registry->assign<DecayComponent>(entity, sf::milliseconds(1000));
            registry->assign<DecayElapsedComponent>(entity);
            ent3 = true;
            spdlog::debug("Ent3 {} created", entity);
        }

        SpaceWar::update(deltaTime);

        timelapse += deltaTime.asMilliseconds();
    }

    return 0;
}

int SpaceWar::event(sf::Event& event)
{
    return 0;
}

int SpaceWar::update(const sf::Time& deltaTime)
{
    DecaySystem::update(deltaTime);

    return 0;
}

int SpaceWar::render()
{
    return 0;
}
