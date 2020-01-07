#pragma once
#include <memory>

#include <entt/entt.hpp>
#include <SFML/Graphics.hpp>

class Singleton
{
public:

    static Singleton* getInstance();

    auto getWindow() const->std::shared_ptr<sf::RenderWindow>;
    void setWindow(std::shared_ptr<sf::RenderWindow> window);

    entt::registry mRegistry;

private:
    Singleton()
    {
        mWindow = nullptr;
    }

    static Singleton* instance;

    std::shared_ptr<sf::RenderWindow> mWindow;

};

