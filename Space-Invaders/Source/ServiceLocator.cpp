#include "../Header/ServiceLocator.hpp"

ServiceLocator::ServiceLocator()
{
    _graphicServicePtr = nullptr;
    _eventServicePtr = nullptr;

    createServices();
}

ServiceLocator::~ServiceLocator()
{
    clearAllServices();
}

void ServiceLocator::createServices()
{
    _graphicServicePtr = new GraphicService();
    _eventServicePtr = new EventService();
}

void ServiceLocator::clearAllServices()
{
    delete _graphicServicePtr;
    _graphicServicePtr = nullptr;

    delete _eventServicePtr;
    _eventServicePtr = nullptr;
}

// Singleton
ServiceLocator* ServiceLocator::getInstance()
{
    static ServiceLocator instance;
    return &instance;
}

void ServiceLocator::initialize()
{
    _graphicServicePtr->initialize();
    _eventServicePtr->initialize();
}

void ServiceLocator::update()
{
    _graphicServicePtr->update();
    _eventServicePtr->update();
}

void ServiceLocator::render()
{
  _graphicServicePtr->render();
}

GraphicService* ServiceLocator::getGraphicService()
{
    return _graphicServicePtr;
}

EventService* ServiceLocator::getEventService()
{
    return _eventServicePtr;
}
