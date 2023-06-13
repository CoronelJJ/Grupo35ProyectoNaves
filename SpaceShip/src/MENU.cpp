#include "MENU.h"
#include<iostream>

MENU::MENU(float width, float height)
{

    //ctor
    // *******************Marco y botones**********************
    _marco.loadFromFile("img/Window.png");
    marco.setTexture(_marco);
    marco.scale(.6f,.35f);
    marco.setPosition(100.f,50.f);


    _boton[0].loadFromFile("img/Table.png");
    boton[0].setTexture(_boton[0]);
    boton[0].scale(.8f,.5f);
    boton[0].setPosition(sf::Vector2f(width/3.4,height/3.5*1));

    _boton[1].loadFromFile("img/Table.png");
    boton[1].setTexture(_boton[1]);
    boton[1].scale(.8f,.5f);
    boton[1].setPosition(sf::Vector2f(width/3.4,height/3.5*1.5));

    _boton[2].loadFromFile("img/Table.png");
    boton[2].setTexture(_boton[2]);
    boton[2].scale(.8f,.5f);
    boton[2].setPosition(sf::Vector2f(width/3.4,height/3.5*2));

    _boton[3].loadFromFile("img/Table.png");
    boton[3].setTexture(_boton[3]);
    boton[3].scale(.8f,.5f);
    boton[3].setPosition(sf::Vector2f(width/3.4,height/3.5*2.5));

    _icono[0].loadFromFile("img/Nave.png");
    icono[0].setTexture(_icono[0]);
    icono[0].scale(0.25,0.25);
    icono[0].setPosition(sf::Vector2f(width/5.2,height/3.5*1));

    _icono[1].loadFromFile("img/Estadistica.png");
    icono[1].setTexture(_icono[1]);
    icono[1].scale(0.25,0.25);
    icono[1].setPosition(sf::Vector2f(width/5.2,height/3.5*1.5));

    _icono[2].loadFromFile("img/Setting.png");
    icono[2].setTexture(_icono[2]);
    icono[2].scale(0.25,0.25);
    icono[2].setPosition(sf::Vector2f(width/5.2,height/3.5*2));

    _icono[3].loadFromFile("img/Info.png");
    icono[3].setTexture(_icono[3]);
    icono[3].scale(0.25,0.25);
    icono[3].setPosition(sf::Vector2f(width/5.2,height/3.5*2.5));

    // **********************Opciones**************************
    if (!font_item.loadFromFile("font/neuropol x rg.otf"))
    {
        // error...
    }

    menu[0].setFont(font_item);
    menu[0].setString("Jugar");
    menu[0].setColor(sf::Color::White);
    menu[0].setPosition(sf::Vector2f(width/2.5,height/3.5*1));

    menu[1].setFont(font_item);
    menu[1].setString("Estadistica");
    menu[1].setColor(sf::Color::Cyan);
    menu[1].setPosition(sf::Vector2f(width/3,height/3.5*1.5));

    menu[2].setFont(font_item);
    menu[2].setString("Opciones");
    menu[2].setColor(sf::Color::Cyan);
    menu[2].setPosition(sf::Vector2f(width/2.8,height/3.5*2));

    menu[3].setFont(font_item);
    menu[3].setString("Creditos");
    menu[3].setColor(sf::Color::Cyan);
    menu[3].setPosition(sf::Vector2f(width/2.7,height/3.5*2.5));

    seleccion_item=0;

}


MENU::~MENU()
{
    //dtor
}

void MENU::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
    target.draw(marco,states);

    for(int x=0; x<Item; x++)
    {
        target.draw(icono[x],states);
        target.draw(boton[x],states);
        target.draw(menu[x],states);
    }
}

void MENU::up()
{
    if(seleccion_item-1>=0)
    {
        menu[seleccion_item].setColor(sf::Color::Cyan);
        seleccion_item--;
        menu[seleccion_item].setColor(sf::Color::White);
    }
}

void MENU::down()
{
    if(seleccion_item+1<Item)
    {
        menu[seleccion_item].setColor(sf::Color::Cyan);
        seleccion_item++;
        menu[seleccion_item].setColor(sf::Color::White);
    }
}







