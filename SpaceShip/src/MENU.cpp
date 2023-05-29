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
    //sf::Color color_F(255,255,255,100);
    //marco.setColor(color_F);

    _boton1.loadFromFile("img/Table.png");
    boton1.setTexture(_boton1);
    boton1.scale(.8f,.5f);
    boton1.setPosition(sf::Vector2f(width/3.4,height/3.5*1));

    _boton2.loadFromFile("img/Table.png");
    boton2.setTexture(_boton1);
    boton2.scale(.8f,.5f);
    boton2.setPosition(sf::Vector2f(width/3.4,height/3.5*1.5));

    _boton3.loadFromFile("img/Table.png");
    boton3.setTexture(_boton1);
    boton3.scale(.8f,.5f);
    boton3.setPosition(sf::Vector2f(width/3.4,height/3.5*2));

    _boton4.loadFromFile("img/Table.png");
    boton4.setTexture(_boton1);
    boton4.scale(.8f,.5f);
    boton4.setPosition(sf::Vector2f(width/3.4,height/3.5*2.5));

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
    target.draw(boton1,states);
    target.draw(boton2,states);
    target.draw(boton3,states);
    target.draw(boton4,states);
    for(int x=0; x<Item; x++)
    {
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







