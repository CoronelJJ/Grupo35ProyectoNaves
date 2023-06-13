#pragma once
#include <SFML/Graphics.hpp>

class IngresarTexto
{
public:

	IngresarTexto();
	const char* getNombre();
	char obtenerCaracter();
	sf::Text obtenerTexto();
	void setNombre();



private:
	sf::Font* fuente;
	sf::Text* texto;

	char* nombre;
	int contador,posicion;
	bool teclear,valido,enter,agregar;




};

