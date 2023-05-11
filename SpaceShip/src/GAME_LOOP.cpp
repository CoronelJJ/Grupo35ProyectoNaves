#include"GAME_LOOP.h"
#include <SFML/Graphics.hpp>

void Juego()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "[S p a c e S h i p]");
    window.setFramerateLimit(50);


    // ***************Dibujo del fondo*****************
    sf::Sprite fondo;
    sf::Texture _fondo;
    _fondo.loadFromFile("img/fondo_1.png");
    fondo.setTexture(_fondo);
    //sf::Color color_F(255,255,255,50);
    //fondo.setColor(color_F);



    //*************************************************

    ASTEROIDE ASTEROIDE;
    FONDO_MOV FONDO_MOV;

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
        FONDO_MOV.update();

        window.clear(sf::Color::Black);




        //************************

        //********Dibujo**********
        window.draw(fondo);
        window.draw(FONDO_MOV);
        window.draw(ASTEROIDE);



        //************************


        //********Display*********
        window.display();
        //************************
    }
    //*************************************************


}
