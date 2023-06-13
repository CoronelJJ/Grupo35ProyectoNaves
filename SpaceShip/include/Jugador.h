#pragma once
#include <cstring>
class Jugador
{
public:
	const char* getNombre();
	void setNombre(const char* nombre);
	int getPuntaje();
	void setPuntaje(int puntos);


private:
	char nombreJugador[8];
	int puntajeJugador;

};

