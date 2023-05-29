#include"GAME_LOOP.h"
#include <SFML/Graphics.hpp>


void Presentacion()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "U.T.N.[Ultimate Terran Neosquad]");
    window.setFramerateLimit(50);

    // *************Tiempo de ejecucion****************

    sf::Clock temporalizador;

    // ***************Dibujo del fondo*****************
    sf::Sprite fondo;
    sf::Texture _fondo;
    _fondo.loadFromFile("img/Presentacion.jpg");
    fondo.setTexture(_fondo);
    fondo.setPosition(53,100);

	// *******************Fuente**********************
    sf::Font font;
    if (!font.loadFromFile("font/neuropol x rg.otf"))
    {
        // error...
    }
    sf::Text Text;
    Text.setFont(font);
    Text.setPosition(sf::Vector2f(115,500));
    Text.setCharacterSize(40);

    //*******************Game Loop**********************
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        sf::Time elapsed=temporalizador.getElapsedTime();

        window.clear(sf::Color::Black);

        Text.setString("Cargando...");

        //********Dibujo**********
        if(elapsed.asSeconds()>0.0&&elapsed.asSeconds()<5.0)
        {
            window.draw(fondo);
            window.draw(Text);
        }
        else
        {
            temporalizador.restart();
            window.close();
        }

        //********Display*********
        window.display();
        //************************
    }



}
