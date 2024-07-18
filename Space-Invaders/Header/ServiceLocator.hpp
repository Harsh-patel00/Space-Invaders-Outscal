#pragma once
#include "EventService.hpp"
#include "GraphicService.hpp"

class ServiceLocator
{
private:
  ServiceLocator();
  ~ServiceLocator();

private:
  void createServices();
  void clearAllServices();
  
public:
  static ServiceLocator* getInstance();

  void initialize();
  void update();
  void render();

public: // Services getter-setters
  GraphicService* getGraphicService();
  EventService* getEventService();
  
private:
  GraphicService *_graphicServicePtr = nullptr;
  EventService *_eventServicePtr = nullptr;
  
};
