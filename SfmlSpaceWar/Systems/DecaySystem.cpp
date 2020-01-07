#include "DecaySystem.hpp"

#include <spdlog/spdlog.h>

#include "../Game/Singleton.hpp"
#include "../Components/DecayComponent.hpp"
#include "../Components/DecayElapsedComponent.hpp"

void DecaySystem::update(const sf::Time& deltaTime)
{
    auto singleton = Singleton::getInstance();
    auto window = singleton->getWindow();
    auto registry = &singleton->mRegistry;

    // remove decayed entities
    registry->view<
        DecayComponent
        , DecayElapsedComponent
    >().each([&registry, &deltaTime](
        auto entity
        , DecayComponent& decay
        , DecayElapsedComponent& decayElapsed
        ) 
        {
            spdlog::debug("entity {}, decayElapsed {}, decay {} "
                , entity
                , decayElapsed.value.asMilliseconds()
                , decay.value.asMilliseconds());
            decayElapsed.value += deltaTime;
            if (decayElapsed.value > decay.value)
            {
                spdlog::debug("Destroy {}", entity);
                registry->destroy(entity);
            }
        });
}

