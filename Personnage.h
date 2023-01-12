#ifndef Personnage_h
#define Personnage_h

#include "Personnage.h"

class Arme;

class Personnage {

 public:

    void boirePotionDeVie(int Quantite);

    void Attaquer(Personnage &Cible);

    void RecevoirDegats(int nbDegats);

    int GetVie();

    Personnage();

    Personnage(int ValVie);


 private:
    int m_vie;

 public:

	//Arme monArme; 
    /**
     * @element-type Arme
     */
    Arme *myArme;
};

#endif // Personnage_h
