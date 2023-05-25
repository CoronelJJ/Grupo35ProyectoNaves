#ifndef PROYECTILENEMIGO_H
#define PROYECTILENEMIGO_H

#include <Proyectil.h>


class ProyectilEnemigo : public Proyectil
{
    public:
        ProyectilEnemigo(int eleccion);

    private:
        Texture* _texDisparo1;
        Texture* _texDisparo2;
        Texture* _texDisparo3;
        Sprite* _sptDisparo;
        Vector2f velocidad;
};

#endif // PROYECTILENEMIGO_H
