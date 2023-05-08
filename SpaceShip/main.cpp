#include <SFML/Graphics.hpp>
#include"ASTEROIDE.h"


int main()
{



    sf::RenderWindow window(sf::VideoMode(800, 600), "[S p a c e S h i p]");
    //window.setFramerateLimit(60);
    // ***************Dibujo del fondo*****************
    sf::Sprite fondo;
    sf::Texture _fondo;
    _fondo.loadFromFile("img/fondo_1.png");
    fondo.setTexture(_fondo);
    //*************************************************

    ASTEROIDE ASTEROIDE;

    //*******************Game Loop**********************
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //*****CMD => Joystik*****

        ASTEROIDE.update();

        window.clear(sf::Color::Black);


        //************************

        //********Dibujo**********
        window.draw(fondo);

        window.draw(ASTEROIDE);





        //************************


        //********Display*********
        window.display();
        //************************
    }
    //*************************************************

    return 0;
}
