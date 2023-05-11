#include "FONDO_MOV.h"

FONDO_MOV::FONDO_MOV()
{
	//ctor
	_fondo1.loadFromFile("img/Stars-Big_1_1_PC.png");
    fondo1.setTexture(_fondo1);
    _fondo2.loadFromFile("img/Stars-Big_1_2_PC.png");
    fondo2.setTexture(_fondo2);
    x=0;
    y=-700;
    x1=0;
    y1=-700;
    sf::Color color_1(255,255,255,150); //Controla los colores y la pocidad de uno de los sprite
    fondo1.setColor(color_1);

}

FONDO_MOV::~FONDO_MOV()
{
	//dtor
}

void FONDO_MOV::update()
{

    fondo1.setPosition(x,fondo1.getPosition().y+4);//Movimiento y velocidad de estrellas 1

    if(fondo1.getPosition().y==700)
    {
        fondo1.setPosition(x,y);
    }

    fondo2.setPosition(x,fondo2.getPosition().y+5); //Movimiento y velocidad de estrellas 2

    if(fondo2.getPosition().y==700)
    {
        fondo2.setPosition(x1,y1);
    }
}


void FONDO_MOV::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
    target.draw(fondo1,states);
    target.draw(fondo2,states);
}



