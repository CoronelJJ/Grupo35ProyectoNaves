#ifndef ENEMIGOS_H_INCLUDED
#define ENEMIGOS_H_INCLUDED

using namespace std;

class Enemigo{
private:
    int IDenemy;
    int HP;
    int MAXhp;
    int VEL;
    int DMG;
    int PT;
public:
    ///Constructor
    Enemigo(){
    IDenemy=0;
    HP=0;
    VEL=0;
    DMG=0;
    PT=0;
    MAXhp=0;
    }
    ///Destructor
    virtual ~Enemigo(){
    }
    ///Set
    void setID(int _ID){IDenemy=_ID;}
    void setHP(int _HP){HP=_HP;}
    void setMAXHP(int _MAXHP){MAXhp=_MAXHP;}
    void setVEL(int _VEL){VEL=_VEL;}
    void setDMG(int _DMG){DMG=_DMG;}
    void setPT(int _PT){PT=_PT;}
    ///Get
    int getID(){return IDenemy;}
    int getHP(){return HP;}
    int getMAXHP(){return MAXhp;}
    int getVEL(){return VEL;}
    int getDMG(){return DMG;}
    int getPT(){return PT;}

};



class STDenemy : public Enemigo{
private:
    sf::Texture textura;
    sf::Sprite DisplaySprite;
    int posY;
    int posX;
public:
    ///Constructor
    STDenemy(){
        textura.loadFromFile("img/Enemy_Std.png");
        DisplaySprite.setTexture(textura);
        posX=0;
        posY=0;
    }
    ///Destructor
    virtual ~STDenemy(){}
    ///Set
    void setPosX(int x){posX=x;}
    void setPosY(int y){posY=y;}

    ///Get
    int getPosX(){return posX;}
    int getPosY(){return posY;}
    sf::Sprite getSprite(){return DisplaySprite;}

    ///Funciones
    void updateSprite(){
        DisplaySprite.setPosition(20,30);


    }

};
#endif // ENEMIGOS_H_INCLUDED
