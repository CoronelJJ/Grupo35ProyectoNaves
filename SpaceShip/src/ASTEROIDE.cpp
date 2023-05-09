#include "ASTEROIDE.h"
#include <stdlib.h>
//#include<iostream>
//using namespace std;

ASTEROIDE::ASTEROIDE()
{
    //ctor
    _texture_A.loadFromFile("img/A1.png");
    _sprite_A.setTexture(_texture_A);
    x=0;
    y=0;

}

ASTEROIDE::~ASTEROIDE()
{
    //dtor
}

void ASTEROIDE::update()
{
    srand(time(NULL));
if(_sprite_A.getPosition().x==0&&_sprite_A.getPosition().y==0)
{
    y = 1+rand()%5;
    x = 1+rand()%790;
}


    _sprite_A.setOrigin(sf::Vector2f(25, 25)); //esto es para que rote sobre su eje y no sobre las coordenadas 0,0
    _sprite_A.rotate(5.5f);


    _sprite_A.setPosition(x,_sprite_A.getPosition().y+10);

   // cout<<_sprite_A.getPosition().x<<"_______"<<_sprite_A.getPosition().y<<endl;
    if(_sprite_A.getPosition().y==700)
    {
        _sprite_A.setPosition(0,0);

    }

}


void ASTEROIDE::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
    target.draw(_sprite_A,states);
}

