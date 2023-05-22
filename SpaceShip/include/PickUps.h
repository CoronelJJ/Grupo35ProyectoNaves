#include <SFML/Graphics.hpp>

using namespace sf;
class PickUps
{
    public:
        PickUps(int efecto);
        FloatRect getPosicion();
        int getEfecto();
        Sprite getSprite();

    private:
        Texture* texShield;
        Texture* texHeal;
        Texture* texSpecial;

        Sprite* spriteShield;
        Sprite* spriteHeal;
        Sprite* spriteSpecial;




};
