#include <SFML/Graphics.hpp>
#include"ASTEROIDE.h"
#include"FONDO_MOV.h"
#include"MENU.h"
#include"GAME_LOOP.h"
#include "Nave.h"
#include<iostream>
using namespace std;



int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "U.T.N.[Ultimate Terran Neosquad]");
    window.setFramerateLimit(50);

    // ***************Presentacion********************

    Presentacion();

    // *******************Menu************************

    MENU menu(window.getSize().x,window.getSize().y);

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
                case sf::Keyboard::Up:
                    menu.up();
                    break;
                case sf::Keyboard::Down:
                    menu.down();
                    break;
                case sf::Keyboard::Return:
                    switch(menu.GetPressedItem())
                    {
                    case 0:
                        cout<<"Juego"<<endl;
                        window.close();
                        Juego();
                        break;
                    case 1:
                        cout<<"Estadistica"<<endl;
                        break;
                    case 2:
                        cout<<"Opciones"<<endl;
                        break;
                    case 3:
                        cout<<"Credito"<<endl;
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
        window.draw(menu);
        window.draw(Text);
        //********Display*********
        window.display();
        //************************
    }
    //*************************************************

    return 0;
}
