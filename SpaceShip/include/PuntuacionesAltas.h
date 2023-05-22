#pragma once
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>

using namespace std;

class PuntuacionesAltas
{
    public:
        void evaluarPuntuacion(int puntos);
        void guardarPuntuacion();
        void mostrarTop();


    private:

        FILE lista;
};
