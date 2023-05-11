#include "MENU.h"
#include<iostream>

MENU::MENU(float width, float height)
{
    //ctor
    if (!font_item.loadFromFile("font/neuropol x rg.otf"))
    {
        // error...
    }

    menu[0].setFont(font_item);
    menu[0].setString("Jugar");
    menu[0].setColor(sf::Color::White);
    menu[0].setPosition(sf::Vector2f(width/2.5,height/3*1));

    menu[1].setFont(font_item);
    menu[1].setString("Estadistica");
    menu[1].setColor(sf::Color::Cyan);
    menu[1].setPosition(sf::Vector2f(width/3,height/3*1.5));

    menu[2].setFont(font_item);
    menu[2].setString("Opciones");
    menu[2].setColor(sf::Color::Cyan);
    menu[2].setPosition(sf::Vector2f(width/2.8,height/3*2));

    menu[3].setFont(font_item);
    menu[3].setString("Creditos");
    menu[3].setColor(sf::Color::Cyan);
    menu[3].setPosition(sf::Vector2f(width/2.7,height/3*2.5));

    seleccion_item=0;

}


MENU::~MENU()
{
    //dtor
}

void MENU::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
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







