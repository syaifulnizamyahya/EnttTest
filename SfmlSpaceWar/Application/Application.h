#pragma once
#include <string>
#include <SFML/Graphics.hpp>

class Application
{
public:
    Application();
    ~Application() = default;

    int run();
     
private:
    bool initializeSettings();
    bool initializeWindow();
    bool initializeResources();

    int mWidth;
    int mHeight;
    int mBitsPerPixel;
    std::string mTitle;
};

