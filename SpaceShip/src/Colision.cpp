
#include "Colision.h"


bool Colision::evaluarColosion(sf::Sprite* objA, sf::Sprite* objB){

if (objA->getGlobalBounds().intersects(objB->getGlobalBounds())){
    return true;
}
else {return false;}

}
