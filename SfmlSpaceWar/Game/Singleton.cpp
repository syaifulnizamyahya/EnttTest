#include "Singleton.hpp"

Singleton* Singleton::getInstance()
{
    if (!instance)
    {
        instance = new Singleton;
    }
    return instance;
}

auto Singleton::getWindow() const -> std::shared_ptr<sf::RenderWindow>
{
    return mWindow;
}
void Singleton::setWindow(std::shared_ptr<sf::RenderWindow> window)
{
    mWindow = std::move(window);
}

