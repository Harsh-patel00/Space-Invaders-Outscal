#include <SFML/Graphics.hpp>

int main()
{

    sf::VideoMode videoMode = sf::VideoMode(800, 600);
    sf::RenderWindow window(videoMode, "Space Invaders");
    window.setPosition(sf::Vector2i(100, 100));

    while(window.isOpen())
    {
        sf::Event gameEvent;

        while(window.pollEvent(gameEvent))
        {
            if(gameEvent.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Blue);

        window.display();
    }
    
    return 0;
}