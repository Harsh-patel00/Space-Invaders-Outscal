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
    bool isRunning();
    void update();
    void render();
};

