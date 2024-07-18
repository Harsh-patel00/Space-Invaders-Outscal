#include <SFML/Graphics.hpp>

class Player
{
public:
    int getScore() {return _score;}
    void setScore(int newScore) {_score = newScore;}

    sf::Vector2f getPosition() {return _position;}
    void setPosition(sf::Vector2f newPosition) {_position = newPosition;}
    
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
    player.texture.loadFromFile("assets/textures/player_ship.png");
    player.sprite.setTexture(player.texture);
    
    while(window.isOpen())
    {
        sf::Event gameEvent;

        while(window.pollEvent(gameEvent))
        {
            if(gameEvent.type == sf::Event::Closed)
                window.close();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            player.move();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.move();
        }
        
        window.clear(sf::Color(50,50,50));

        player.sprite.setPosition(player.getPosition());

        window.draw(player.sprite);
        
        window.display();
    }
    
    return 0;
}