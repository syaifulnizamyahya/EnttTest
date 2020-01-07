#include "DecayElapsedComponent.hpp"

DecayElapsedComponent::DecayElapsedComponent() noexcept
    :value(sf::Time::Zero)
{
}

DecayElapsedComponent& DecayElapsedComponent::operator=(const DecayElapsedComponent&) noexcept
{
    return *this;
}
