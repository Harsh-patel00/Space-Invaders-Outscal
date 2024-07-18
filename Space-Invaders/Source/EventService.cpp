#include "../Header/EventService.hpp"
#include "../Header/GameService.hpp"

EventService::EventService()
{
    _gameWindowPtr = nullptr;
}

EventService::~EventService() = default;

bool EventService::isGameWindowOpen()
{
    return _gameWindowPtr != nullptr; 
}

bool EventService::gameWindowWasClosed()
{
    return _gameEvent.type == sf::Event::Closed;
}

bool EventService::hasQuitGame()
{
    return isKeyboardEvent() && pressedEscapeKey();
}

void EventService::initialize()
{
    _gameWindowPtr = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
}

void EventService::update()
{
}

void EventService::processEvents()
{
    if (isGameWindowOpen())
    {
        while (_gameWindowPtr->pollEvent(_gameEvent))
        {
            if (gameWindowWasClosed() || hasQuitGame())
            {
                _gameWindowPtr->close();
            }               
        }
    }
}

bool EventService::pressedEscapeKey()
{
    return _gameEvent.key.code == sf::Keyboard::Escape;
}

bool EventService::isKeyboardEvent()
{
    return _gameEvent.type == sf::Event::KeyPressed;
}
