#include "../Header/GameService.hpp"

GameService::GameService()
{
  _serviceLocatorPtr = nullptr;
  _gameWindowPtr = nullptr;
  
}

GameService::~GameService()
{
  destroy();
}

void GameService::initialize()
{
  _serviceLocatorPtr->initialize();
  initializeVariables();
}

void GameService::initializeVariables()
{
  _gameWindowPtr = _serviceLocatorPtr->getGraphicService()->getGameWindow();
}

void GameService::destroy()
{
}

void GameService::ignite()
{
  _serviceLocatorPtr = ServiceLocator::getInstance();
  initialize();
}

void GameService::update()
{
  _serviceLocatorPtr->getEventService()->processEvents();
  
  _serviceLocatorPtr->update();
}

void GameService::render()
{  
  _gameWindowPtr->clear(_serviceLocatorPtr->getGraphicService()->getWindowColor());
  _serviceLocatorPtr->render();
  _gameWindowPtr->display();
}

bool GameService::isRunning()
{
  return _serviceLocatorPtr->getGraphicService()->isGameWindowOpen();
}
