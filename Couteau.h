#ifndef Couteau_h
#define Couteau_h

#include "Arme.h"


class Couteau : public Arme {

 public:

    void Afficher();

    Couteau(std::string Qualifiant, int Degats);

    Couteau();

    ~Couteau();

    int Frapper();

    int Planter();


 private:
    std::string m_GenreArme;
    std::string m_NomQualifiant;
};

#endif // Couteau_h
