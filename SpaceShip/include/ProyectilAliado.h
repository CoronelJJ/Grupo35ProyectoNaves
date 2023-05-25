#ifndef PROYECTILALIADO_H
#define PROYECTILALIADO_H

#include <Proyectil.h>


class ProyectilAliado : public Proyectil
{
    public:
        ProyectilAliado();

    private:
        Texture* _texDisparo1;
        Texture* _texDisparo2;
        Texture* _texDisparo3;
        Sprite* _sptDisparo;
        Vector2f velocidad;
};

#endif // PROYECTILALIADO_H
