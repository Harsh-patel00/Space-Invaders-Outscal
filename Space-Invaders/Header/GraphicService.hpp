#pragma once

#include <SFML/Graphics.hpp>

class GraphicService
{
public:
  GraphicService();
  ~GraphicService();

private:
  void setVideoMode();
  void onDestroy();
  sf::RenderWindow* createGameWindow(); 
  
public:
  void initialize();
  void update();
  void render();
  bool isGameWindowOpen();

  sf::RenderWindow* getGameWindow();
  sf::Color getWindowColor();
  
private:
  const std::string _gameTindowTitle = "Space Invader";
  const int _gameWindowWidth = 800;
  const int _gameWindowHeight = 600;
  const sf::Color _windowColor = sf::Color(50, 50, 50);

  sf::VideoMode *_videoModePtr = nullptr;
  sf::RenderWindow *_windowPtr = nullptr;
};
