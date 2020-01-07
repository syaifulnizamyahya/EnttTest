#pragma once
#include <SFML/System.hpp>

class DecayComponent
{
public:
    DecayComponent();
    DecayComponent(
        sf::Time value
    ) noexcept;

    ~DecayComponent() = default;

    DecayComponent& operator=(const DecayComponent&) noexcept;

    sf::Time value;
};
