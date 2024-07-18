#include "../Header/GraphicService.hpp"

GraphicService::GraphicService()
{
    _windowPtr = nullptr;
    _videoModePtr = nullptr;
}

GraphicService::~GraphicService()
{
    onDestroy();
}

void GraphicService::setVideoMode()
{
    _videoModePtr = new sf::VideoMode(_gameWindowHeight,_gameWindowHeight, sf::VideoMode::getDesktopMode().bitsPerPixel);
}

void GraphicService::onDestroy()
{
    delete _videoModePtr;
    delete _windowPtr;
}

sf::RenderWindow* GraphicService::createGameWindow()
{
    setVideoMode();
    return new sf::RenderWindow(*_videoModePtr, _gameTindowTitle);
}

void GraphicService::initialize()
{
    _windowPtr = createGameWindow();
}

void GraphicService::update()
{
    
}

void GraphicService::render()
{
    
}

bool GraphicService::isGameWindowOpen()
{
    return _windowPtr->isOpen();
}

sf::RenderWindow* GraphicService::getGameWindow()
{
    return _windowPtr;
}

sf::Color GraphicService::getWindowColor()
{
    return _windowColor;
}
