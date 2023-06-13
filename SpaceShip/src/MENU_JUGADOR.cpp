#include"GAME_LOOP.h"
#include <SFML/Graphics.hpp>
#include <iostream>>

void Menu_jugador()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "U.T.N.[Ultimate Terran Neosquad]");
    window.setFramerateLimit(50);

    // *******************Menu************************

    ELECCION_NAVE ELECCION_NAVE(window.getSize().x,window.getSize().y);

    // ***************Dibujo del fondo*****************
    sf::Sprite fondo;
    sf::Texture _fondo;
    _fondo.loadFromFile("img/Nebula Blue.png");
    fondo.setTexture(_fondo);
    //sf::Color color_F(255,255,255,50);
    //fondo.setColor(color_F);

    // *******************Fuente**********************
    sf::Font font;
    if (!font.loadFromFile("font/OriginTech personal use.ttf"))
    {
        // error...
    }
    sf::Text Text;
    Text.setFont(font);
    Text.setPosition(sf::Vector2f(150,60));
    Text.setCharacterSize(30);

    //*******************Game Loop**********************
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::KeyReleased:
                switch(event.key.code)
                {
                case sf::Keyboard::Left:
                    ELECCION_NAVE.left();
                    break;
                case sf::Keyboard::Right:
                    ELECCION_NAVE.right();
                    break;
                case sf::Keyboard::Return:
                    switch(ELECCION_NAVE.GetPressedItem()) //Eleccion de nave y comienzo del juego
                    {
                    case 0:
                        cout<<"Battlecruiser"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 1:
                        cout<<"Bomber"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 2:
                        cout<<"Dreadnought"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 3:
                        cout<<"Fighter"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 4:
                        cout<<"Frigate"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 5:
                        cout<<"Scout"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 6:
                        cout<<"Torpedo_Ship"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 7:
                        cout<<"Menu principal"<<endl;
                        window.close();
                        menu_principal();
                        break;
                    }
                    break;

                }
                break;

            }

            if (event.type == sf::Event::Closed)
                window.close();
        }

        //*****CMD => Joystik*****


        window.clear(sf::Color::Black);

        Text.setString("Ultimate Terran Neosquad");

        //********Dibujo**********
        window.draw(fondo);
        window.draw(ELECCION_NAVE);
        window.draw(Text);
        //********Display*********
        window.display();
        //************************
    }
}

