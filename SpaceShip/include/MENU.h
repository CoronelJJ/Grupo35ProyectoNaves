#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>

#define Item 4

class MENU: public sf::Drawable
{
public:
    MENU(float width, float height);
    virtual ~MENU();
    void draw(sf::RenderTarget&target,sf::RenderStates states)const override;
    void up();
    void down();
    int GetPressedItem()
    {
        return seleccion_item;
    }

protected:

private:
    int seleccion_item;
    sf::Font font_item;
    sf::Text menu[Item];

    sf::Sprite marco;
    sf::Texture _marco;
    sf::Sprite boton1;
    sf::Texture _boton1;
    sf::Sprite boton2;
    sf::Texture _boton2;
    sf::Sprite boton3;
    sf::Texture _boton3;
    sf::Sprite boton4;
    sf::Texture _boton4;

};

#endif // MENU_H
