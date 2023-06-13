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

    sf::Sprite boton[Item];
    sf::Texture _boton[Item];

    sf::Sprite icono[Item];
    sf::Texture _icono[Item];

};

#endif // MENU_H
