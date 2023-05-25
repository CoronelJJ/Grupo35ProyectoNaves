#ifndef PROYECTIL_H
#define PROYECTIL_H
#include "Juego.h"
using namespace sf;

class Proyectil
{
    public:
        Proyectil();
        Sprite getSprite();
        void actualizar(float t);
        void setPosicionDisparo(float enX, float enY);
        Sprite centrarOrigen(Sprite *proyectil);
        void animarDisparo(Sprite* proyectil, Vector2i numeroFrame);
        void torpedo(int frame, float time);
        FloatRect devolverPosicion();

    private:



};

#endif // PROYECTIL_H
