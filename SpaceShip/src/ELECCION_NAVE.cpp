#include "ELECCION_NAVE.h"


ELECCION_NAVE::ELECCION_NAVE(float width, float height)
{

    //ctor
    // *******************Marco, iconos y botones**********************
    _marco.loadFromFile("img/Window.png");
    marco.setTexture(_marco);
    marco.scale(.6f,.38f);
    marco.setPosition(100.f,50.f);

    sf::Color color_opaco(255,255,255,100); //opacidad
    sf::Color color_brillante(255,255,255,255);

    _boton[0].loadFromFile("img/Table.png");
    boton[0].setTexture(_boton[0]);
    boton[0].scale(.3f,.2f);
    boton[0].setPosition(sf::Vector2f(width/6*1,height/2.5));
    boton[0].setColor(color_brillante);

    _boton[1].loadFromFile("img/Table.png");
    boton[1].setTexture(_boton[1]);
    boton[1].scale(.3f,.2f);
    boton[1].setPosition(sf::Vector2f(width/6*2,height/2.5));
    boton[1].setColor(color_opaco);

    _boton[2].loadFromFile("img/Table.png");
    boton[2].setTexture(_boton[2]);
    boton[2].scale(.3f,.2f);
    boton[2].setPosition(sf::Vector2f(width/6*3,height/2.5));
    boton[2].setColor(color_opaco);

    _boton[3].loadFromFile("img/Table.png");
    boton[3].setTexture(_boton[3]);
    boton[3].scale(.3f,.2f);
    boton[3].setPosition(sf::Vector2f(width/6*4,height/2.5));
    boton[3].setColor(color_opaco);

    _boton[4].loadFromFile("img/Table.png");
    boton[4].setTexture(_boton[4]);
    boton[4].scale(.3f,.2f);
    boton[4].setPosition(sf::Vector2f(width/6*1.5,height/1.57));
    boton[4].setColor(color_opaco);

    _boton[5].loadFromFile("img/Table.png");
    boton[5].setTexture(_boton[5]);
    boton[5].scale(.3f,.2f);
    boton[5].setPosition(sf::Vector2f(width/6*2.5,height/1.57));
    boton[5].setColor(color_opaco);

    _boton[6].loadFromFile("img/Table.png");
    boton[6].setTexture(_boton[6]);
    boton[6].scale(.3f,.2f);
    boton[6].setPosition(sf::Vector2f(width/6*3.5,height/1.57));
    boton[6].setColor(color_opaco);


    _icono[0].loadFromFile("img/Table_02.png");
    icono[0].setTexture(_icono[0]);
    icono[0].scale(0.5,0.5);
    icono[0].setPosition(sf::Vector2f(width/6*1,height/4.5));
    icono[0].setColor(color_brillante);

    _icono[1].loadFromFile("img/Table_02.png");
    icono[1].setTexture(_icono[1]);
    icono[1].scale(0.5,0.5);
    icono[1].setPosition(sf::Vector2f(width/6*2,height/4.5));
    icono[1].setColor(color_opaco);

    _icono[2].loadFromFile("img/Table_02.png");
    icono[2].setTexture(_icono[2]);
    icono[2].scale(0.5,0.5);
    icono[2].setPosition(sf::Vector2f(width/6*3,height/4.5));
    icono[2].setColor(color_opaco);

    _icono[3].loadFromFile("img/Table_02.png");
    icono[3].setTexture(_icono[3]);
    icono[3].scale(0.5,0.5);
    icono[3].setPosition(sf::Vector2f(width/6*4,height/4.5));
    icono[3].setColor(color_opaco);

    _icono[4].loadFromFile("img/Table_02.png");
    icono[4].setTexture(_icono[4]);
    icono[4].scale(0.5,0.5);
    icono[4].setPosition(sf::Vector2f(width/6*1.5,height/2.2));
    icono[4].setColor(color_opaco);

    _icono[5].loadFromFile("img/Table_02.png");
    icono[5].setTexture(_icono[5]);
    icono[5].scale(0.5,0.5);
    icono[5].setPosition(sf::Vector2f(width/6*2.5,height/2.2));
    icono[5].setColor(color_opaco);

    _icono[6].loadFromFile("img/Table_02.png");
    icono[6].setTexture(_icono[6]);
    icono[6].scale(0.5,0.5);
    icono[6].setPosition(sf::Vector2f(width/6*3.5,height/2.2));
    icono[6].setColor(color_opaco);


    _nave[0].loadFromFile("img/Battlecruiser.png");
    nave[0].setTexture(_nave[0]);
    nave[0].scale(0.8,0.8);
    nave[0].setPosition(sf::Vector2f(width/6*1,height/4.5));
    nave[0].setColor(color_brillante);

    _nave[1].loadFromFile("img/Bomber.png");
    nave[1].setTexture(_nave[1]);
    nave[1].scale(1.5,1.5);
    nave[1].setPosition(sf::Vector2f(width/5.9*2,height/4.5));
    nave[1].setColor(color_opaco);

    _nave[2].loadFromFile("img/Dreadnought.png");
    nave[2].setTexture(_nave[2]);
    nave[2].scale(0.8,0.8);
    nave[2].setPosition(sf::Vector2f(width/6*3,height/4.5));
    nave[2].setColor(color_opaco);

    _nave[3].loadFromFile("img/Fighter.png");
    nave[3].setTexture(_nave[3]);
    nave[3].scale(1.5,1.5);
    nave[3].setPosition(sf::Vector2f(width/5.9*4,height/4.5));
    nave[3].setColor(color_opaco);

    _nave[4].loadFromFile("img/Frigate.png");
    nave[4].setTexture(_nave[4]);
    nave[4].scale(1.5,1.5);
    nave[4].setPosition(sf::Vector2f(width/6*1.5,height/2.2));
    nave[4].setColor(color_opaco);

    _nave[5].loadFromFile("img/Scout.png");
    nave[5].setTexture(_nave[5]);
    nave[5].scale(1.5,1.5);
    nave[5].setPosition(sf::Vector2f(width/5.9*2.5,height/2.2));
    nave[5].setColor(color_opaco);

    _nave[6].loadFromFile("img/Torpedo_Ship.png");
    nave[6].setTexture(_nave[6]);
    nave[6].scale(1.5,1.5);
    nave[6].setPosition(sf::Vector2f(width/5.9*3.5,height/2.2));
    nave[6].setColor(color_opaco);

    // **********************Opciones**************************
    if (!font_item.loadFromFile("font/neuropol x rg.otf"))
    {
        // error...
    }

    eleccion_nave[0].setFont(font_item);
    eleccion_nave[0].setCharacterSize(10);
    eleccion_nave[0].setString("Battlecruiser");
    eleccion_nave[0].setColor(sf::Color::White);
    eleccion_nave[0].setPosition(sf::Vector2f(width/5.7*1,height/2.5));

    eleccion_nave[1].setFont(font_item);
    eleccion_nave[1].setCharacterSize(10);
    eleccion_nave[1].setString("Bomber");
    eleccion_nave[1].setColor(sf::Color::Cyan);
    eleccion_nave[1].setPosition(sf::Vector2f(width/5.4*2,height/2.5));

    eleccion_nave[2].setFont(font_item);
    eleccion_nave[2].setCharacterSize(10);
    eleccion_nave[2].setString("Dreadnought");
    eleccion_nave[2].setColor(sf::Color::Cyan);
    eleccion_nave[2].setPosition(sf::Vector2f(width/5.9*3,height/2.5));

    eleccion_nave[3].setFont(font_item);
    eleccion_nave[3].setCharacterSize(10);
    eleccion_nave[3].setString("Fighter");
    eleccion_nave[3].setColor(sf::Color::Cyan);
    eleccion_nave[3].setPosition(sf::Vector2f(width/5.7*4,height/2.5));

    eleccion_nave[4].setFont(font_item);
    eleccion_nave[4].setCharacterSize(10);
    eleccion_nave[4].setString("Frigate");
    eleccion_nave[4].setColor(sf::Color::Cyan);
    eleccion_nave[4].setPosition(sf::Vector2f(width/5.3*1.5,height/1.57));

    eleccion_nave[5].setFont(font_item);
    eleccion_nave[5].setCharacterSize(10);
    eleccion_nave[5].setString("Scout");
    eleccion_nave[5].setColor(sf::Color::Cyan);
    eleccion_nave[5].setPosition(sf::Vector2f(width/5.4*2.5,height/1.57));

    eleccion_nave[6].setFont(font_item);
    eleccion_nave[6].setCharacterSize(10);
    eleccion_nave[6].setString("Torpedo Ship");
    eleccion_nave[6].setColor(sf::Color::Cyan);
    eleccion_nave[6].setPosition(sf::Vector2f(width/5.9*3.5,height/1.57));

    // **********************Volver a menu principal**************************
    _volver[7].loadFromFile("img/Back_01.png");
    volver[7].setTexture(_volver[7]);
    volver[7].scale(0.3,0.3);
    volver[7].setPosition(sf::Vector2f(width/6*1,height/1.2));
    volver[7].setColor(color_opaco);

    seleccion_item=0;

    // **********************Nombre del jugador**************************

    _msj.loadFromFile("img/Cloud.png");
    msj.setTexture(_msj);
    msj.scale(0.4,0.15);
    msj.setPosition(sf::Vector2f(width/6.3,height/1.45));

    _face.loadFromFile("img/Table_01.png");
    face.setTexture(_face);
    face.scale(0.5,0.5);
    face.setPosition(sf::Vector2f(width/6*3.5,height/1.45));


    if (!font1.loadFromFile("font/neuropol x rg.otf"))
    {
        // error...
    }
    text1.setFont(font1);
    text1.setCharacterSize(20);
    text1.setString("Identifiquese piloto!");
    text1.setPosition(sf::Vector2f(width/5.7,height/1.4));

    nombrePiloto.setFont(font1);




}


ELECCION_NAVE::~ELECCION_NAVE()
{
    //dtor
}

void ELECCION_NAVE::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
    target.draw(marco,states);

    for(int x=0; x<Item; x++)
    {
        target.draw(icono[x],states);
    }
    for(int x=0; x<Item; x++)
    {
        target.draw(nave[x],states);
    }
    for(int x=0; x<Item; x++)
    {
        target.draw(boton[x],states);
    }
    for(int x=0; x<Item; x++)
    {
        target.draw(eleccion_nave[x],states);
    }
    target.draw(msj,states);
    target.draw(face,states);
    target.draw(volver[7],states);
    target.draw(text1,states);
}

void ELECCION_NAVE::left()
{
    sf::Color color_opaco(255,255,255,100); //opacidad
    sf::Color color_brillante(255,255,255,255);

    if(seleccion_item-1>=0)
    {
        boton[seleccion_item].setColor(color_opaco);
        icono[seleccion_item].setColor(color_opaco);
        nave[seleccion_item].setColor(color_opaco);
        volver[seleccion_item].setColor(color_opaco);
        eleccion_nave[seleccion_item].setColor(sf::Color::Cyan);
        seleccion_item--;
        eleccion_nave[seleccion_item].setColor(sf::Color::White);
        boton[seleccion_item].setColor(color_brillante);
        icono[seleccion_item].setColor(color_brillante);
        nave[seleccion_item].setColor(color_brillante);
        volver[seleccion_item].setColor(color_brillante);
    }

}

void ELECCION_NAVE::right()
{
    sf::Color color_opaco(255,255,255,100); //opacidad
    sf::Color color_brillante(255,255,255,255);

    if(seleccion_item+1<Item)
    {
        boton[seleccion_item].setColor(color_opaco);
        icono[seleccion_item].setColor(color_opaco);
        nave[seleccion_item].setColor(color_opaco);
        volver[seleccion_item].setColor(color_opaco);
        eleccion_nave[seleccion_item].setColor(sf::Color::Cyan);
        seleccion_item++;
        eleccion_nave[seleccion_item].setColor(sf::Color::White);
        boton[seleccion_item].setColor(color_brillante);
        icono[seleccion_item].setColor(color_brillante);
        nave[seleccion_item].setColor(color_brillante);
        volver[seleccion_item].setColor(color_brillante);
    }

}

void ELECCION_NAVE::teclearNombre(){

while(!IngresarNombre.getValido()){


        target.draw(IngresarNombre.obtenerTexto(),states);
        IngresarNombre.


    }

nombrePiloto=IngresarNombre.getNombre();


}
