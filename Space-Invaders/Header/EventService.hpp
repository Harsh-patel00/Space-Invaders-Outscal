#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class EventService
{
public:
    EventService();
    ~EventService();
    
private:
    bool isGameWindowOpen();
    bool gameWindowWasClosed();
    bool hasQuitGame();

public:
    void initialize();
    void update();
    void processEvents();
    bool pressedEscapeKey();
    bool isKeyboardEvent();
    
private:
    sf::Event _gameEvent{};
    sf::RenderWindow *_gameWindowPtr{};
};
