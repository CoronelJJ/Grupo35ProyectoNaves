#ifndef ASTEROIDE_H
#define ASTEROIDE_H
#include <SFML/Graphics.hpp>

class ASTEROIDE: public sf::Drawable
{
public:
    ASTEROIDE();
    virtual ~ASTEROIDE();
    void update();
    void draw(sf::RenderTarget&target,sf::RenderStates states)const override;

private:
    sf::Sprite _sprite_A;
    sf::Texture _texture_A;
   //sf::Vector2f _velocity_A;
sf::Transform t;
    float x;
    float y;


};

#endif // ASTEROIDE_H
