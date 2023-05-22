#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace sf;

class Nave
{
    private:
    float _velocidad;
    int eleccion;
    Texture* texNave1;
    Texture* texNave2;
    Texture* texEscudo;
    Sprite* spriteNave1;
    Sprite* spriteNave2;
    Sprite* spriteEscudo;
    int vida;



    public:
        Nave(int opcion);
        Sprite getSprite();
        FloatRect getPosicion();
        void colisionCon(int elemento);
        void actualizarPosicion(Event tecla);
        void animarFrame(Sprite* modelo, Vector2i NumeroFrame);
        void actualizarVida(int danio);
        void estadoEscudo(int estado);




};

