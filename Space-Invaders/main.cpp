#include <SFML/Graphics.hpp>

int main()
{

    sf::VideoMode videoMode = sf::VideoMode(800, 600);
    sf::RenderWindow window(videoMode, "Space Invaders");
    window.setPosition(sf::Vector2i(100, 100));

    // Draw a circle
    sf::CircleShape circle(50); // Radius 50
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(400, 300); // Set position

    // Draw a square
    sf::RectangleShape square(sf::Vector2f(20, 20)); // Size 20x20
    square.setFillColor(sf::Color::Red);
    square.setPosition(550, 400); // Set position

    // Draw a triangle
    sf::ConvexShape triangle(3);
    triangle.setPoint(0, sf::Vector2f(200, 100));
    triangle.setPoint(1, sf::Vector2f(300, 300));
    triangle.setPoint(2, sf::Vector2f(100, 300));
    triangle.setFillColor(sf::Color::Blue);

    // Sprite
    sf::Texture outscal_texture;
    outscal_texture.loadFromFile("assets/textures/outscal_logo.png");
    sf::Sprite outscal_sprite;
    outscal_sprite.setTexture(outscal_texture);
    outscal_sprite.setPosition(200, 100); // Position
    outscal_sprite.setRotation(45); // Rotation in degrees
    outscal_sprite.setScale(0.5, 0.5); // Scale factor

    // Text
    sf::Font font;
    font.loadFromFile("assets/fonts/DS_DIGIB.ttf");
    sf::Text text("Hello SFML!", font, 50);
    text.setFillColor(sf::Color::Red);
    
    while(window.isOpen())
    {
        sf::Event gameEvent;

        while(window.pollEvent(gameEvent))
        {
            if(gameEvent.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(50,50,50));

        window.draw(circle);
        window.draw(square);
        window.draw(triangle);
        window.draw(outscal_sprite);
        window.draw(text);

        
        window.display();
    }
    
    return 0;
}