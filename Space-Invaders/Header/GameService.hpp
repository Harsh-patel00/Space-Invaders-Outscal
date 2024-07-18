#pragma once

class GameService
{
public:
    GameService();
    ~GameService();

private:
    void initialize();
    void destroy();

public:
    void ignite();
    void update();
    void render();
    bool isRunning();
};

