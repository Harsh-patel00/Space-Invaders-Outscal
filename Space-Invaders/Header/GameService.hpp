#pragma once

#include "ServiceLocator.hpp"

class GameService
{
public:
    GameService();
    ~GameService();

private:
    void initialize();
    void initializeVariables();
    void destroy();

public:
    void ignite();
    bool isRunning();
    void update();
    void render();

private:
    ServiceLocator *_serviceLocatorPtr = nullptr;
    sf::RenderWindow *_gameWindowPtr = nullptr;
};

