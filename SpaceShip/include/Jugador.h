#ifndef JUGADOR_H
#define JUGADOR_H
#include <cstring>


class Jugador
{
    public:
        Jugador();
        void setNombre(const char* nombre){strcpy(_nombre,nombre);}
        void setPuntaje(int puntos){_puntaje=puntos*1000;}
        const char* getNombre(){return _nombre;}
        int getPuntaje(){return _puntaje;}


    private:
        char _nombre[16];
        int _puntaje;
};

#endif // JUGADOR_H
