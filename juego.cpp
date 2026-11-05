#include <SFML/Graphics.hpp>
#include <optional>

int main() {

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Mi Ventana SFML");

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    shape.setPosition({300.f, 200.f});


    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::White);
        window.draw(shape);
        window.display();
    }

    return 0;
}