#include <SFML/Graphics.hpp>

class Player
{
public:
    int getScore() {return _score;}
    void setScore(int newScore) {_score = newScore;}
    void takeDamage() {}
    void move() {}
    void shootBullets() {}
    
    
public:
    sf::Texture texture;
    sf::Sprite sprite;

private:
    int _score = 0;
    int _health = 3;
    int _movementSpeed = 5;
    sf::Vector2f _position = sf::Vector2f(200.f, 100.f);
    
};

int main()
{
    sf::VideoMode videoMode = sf::VideoMode(800, 600);
    sf::RenderWindow window(videoMode, "Space Invaders");

    Player player;
    
    while(window.isOpen())
    {
        sf::Event gameEvent;

        while(window.pollEvent(gameEvent))
        {
            if(gameEvent.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(50,50,50));
        
        window.display();
    }
    
    return 0;
}