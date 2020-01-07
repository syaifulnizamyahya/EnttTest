#include "DecayComponent.hpp"

DecayComponent::DecayComponent()
    :value(sf::Time::Zero)
{
}

DecayComponent::DecayComponent(
    sf::Time value
) noexcept
    :value(value)
{
}

DecayComponent& DecayComponent::operator=(const DecayComponent&) noexcept
{
    return *this;
}
