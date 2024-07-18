#include "../Header/ServiceLocator.hpp"

ServiceLocator::ServiceLocator()
{
    _graphicServicePtr = nullptr;

    createServices();
}

ServiceLocator::~ServiceLocator()
{
    clearAllServices();
}

void ServiceLocator::createServices()
{
    _graphicServicePtr = new GraphicService();
}

void ServiceLocator::clearAllServices()
{
    delete _graphicServicePtr;
    _graphicServicePtr = nullptr;
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
}

void ServiceLocator::update()
{
    _graphicServicePtr->update();
}

void ServiceLocator::render()
{
  _graphicServicePtr->render();
}

GraphicService* ServiceLocator::getGraphicService()
{
    return _graphicServicePtr;
}
