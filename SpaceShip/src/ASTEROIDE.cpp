#include "ASTEROIDE.h"
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

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
    float _x, _y;


    srand(time(NULL));

	y = 0;//1+rand()%(5);
    x = 1+rand()%(690)+1;

    _sprite_A.setOrigin(sf::Vector2f(25, 25)); //esto es para que rote sobre su eje y no sobre las coordenadas 0,0
    _sprite_A.rotate(1.5f);

    _sprite_A.setPosition(x,_sprite_A.getPosition().y+1);

    cout<<x<<"_______"<<_sprite_A.getPosition().y<<endl;


}


void ASTEROIDE::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
    target.draw(_sprite_A,states);
}

