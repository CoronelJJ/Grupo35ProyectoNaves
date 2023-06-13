#include "Jugador.h"

const char* Jugador::getNombre()
{
	return nombreJugador;
}

void Jugador::setNombre(const char* nombre)
{
	strcpy_s(nombreJugador, nombre);
}

int Jugador::getPuntaje()
{
	return puntajeJugador;
}

void Jugador::setPuntaje(int puntos)
{
	puntajeJugador = puntos;
}
