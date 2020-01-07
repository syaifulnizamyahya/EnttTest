#include "Application.h"

#include <cstdlib>

#include <SFML/Graphics.hpp>
#include <spdlog/spdlog.h>

#include "../Game/SpaceWar.h"
#include "../Game/Singleton.hpp"

Singleton* Singleton::instance = nullptr;

Application::Application()
{
    // TODO:check if fails
    initializeSettings();
    initializeWindow();
    initializeResources();
}

int Application::run()
{
    // TODO:start menu
    Singleton* singleton = Singleton::getInstance();
    auto window = singleton->getWindow();

    SpaceWar spaceWar;
    spaceWar.run();

    return EXIT_SUCCESS;
}

bool Application::initializeSettings()
{
    // TODO:load windows settings from file
    mWidth = 1280;
    mHeight = 720;
    const sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    mBitsPerPixel = desktop.bitsPerPixel;
    mTitle = "SpaceWar!";

    return true;
}

bool Application::initializeWindow()
{
    auto window = std::make_shared<sf::RenderWindow>(
        sf::VideoMode(
            mWidth
            , mHeight
            , mBitsPerPixel
        )
        , mTitle
        , sf::Style::Titlebar | sf::Style::Close
        );
    //window->setVerticalSyncEnabled(true);
    window->setFramerateLimit(60);

    Singleton* s = Singleton::getInstance();
    s->setWindow(window);

    return true;
}

bool Application::initializeResources()
{

    return true;
}
