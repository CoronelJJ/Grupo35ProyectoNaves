#include "IngresarTexto.h"

IngresarTexto::IngresarTexto()
{
	fuente = new sf::Font();
	fuente->loadFromFile("Letra.ttf");

	texto = new sf::Text;
	texto->setFont(*fuente);

	contador = 0;
	posicion = 0;

	//setString
	teclear = true;
	valido = false;
	agregar = false;

    char nombre[9]={"xyxz"};

	texto->setString(nombre);
	texto->setPosition(400, 300);

}

const char* IngresarTexto::getNombre()
{
	return nombre;
}

char IngresarTexto::obtenerCaracter()
{
	if (teclear && sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		teclear = false;
		agregar = true;
		return 'A';
	}
	if (teclear && sf::Keyboard::isKeyPressed(sf::Keyboard::Delete)) {
		//teclear = false;
		return ' ';
	}
	if (teclear && sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
		//teclear = false;
		enter = true;
		return ' ';
	}



}

sf::Text IngresarTexto::obtenerTexto()
{
	return *texto;
}

void IngresarTexto::setNombre()
{
	while (!valido) {
		enter = false;
		nombre[posicion] = obtenerCaracter();
		//teclear = true;
		if (agregar) {
			posicion++;
			agregar = false;

		}


		if (posicion < 0) { posicion = 0; }

		if (posicion > 2 && posicion < 10 && enter) {
			valido = true;
		}
	}

}
