#ifndef ELECCION_NAVE_H
#define ELECCION_NAVE_H
#include <SFML/Graphics.hpp>


#define Item 8


class ELECCION_NAVE: public sf::Drawable
{
public:
    ELECCION_NAVE(float width, float height);
    virtual ~ELECCION_NAVE();
    void draw(sf::RenderTarget&target,sf::RenderStates states)const override;
    void right();
    void left();
    int GetPressedItem()
    {
        return seleccion_item;
    }


protected:

private:
    int seleccion_item;
    sf::Font font_item;
    sf::Text eleccion_nave[Item];

    sf::Font font1;
    sf::Text text1;

    sf::Sprite msj;
    sf::Texture _msj;

    sf::Sprite face;
    sf::Texture _face;

    sf::Sprite volver[Item];
    sf::Texture _volver[Item];

    sf::Sprite marco;
    sf::Texture _marco;

    sf::Sprite boton[Item];
    sf::Texture _boton[Item];

    sf::Sprite icono[Item];
    sf::Texture _icono[Item];

    sf::Sprite nave[Item];
    sf::Texture _nave[Item];

};

#endif // ELECCION_NAVE_H
