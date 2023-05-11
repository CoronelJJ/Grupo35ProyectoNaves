#ifndef FONDO_MOV_H
#define FONDO_MOV_H
#include <SFML/Graphics.hpp>


class FONDO_MOV: public sf::Drawable
{
public:
    FONDO_MOV();
    virtual ~FONDO_MOV();
    void update();
    void draw(sf::RenderTarget&target,sf::RenderStates states)const override;

private:
    sf::Sprite fondo1;
    sf::Texture _fondo1;
    sf::Sprite fondo2;
    sf::Texture _fondo2;

    float x, x1;
    float y, y1;
};

#endif // FONDO_MOV_H
