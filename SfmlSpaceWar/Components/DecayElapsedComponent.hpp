#pragma once
#include <SFML/System.hpp>

class DecayElapsedComponent
{
public:
    DecayElapsedComponent() noexcept;

    ~DecayElapsedComponent() = default;

    DecayElapsedComponent& operator=(const DecayElapsedComponent&) noexcept;

    sf::Time value;
};
