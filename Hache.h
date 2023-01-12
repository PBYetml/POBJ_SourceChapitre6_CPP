#ifndef Hache_h
#define Hache_h

#include "Arme.h"


class Hache : public Arme {

 public:

    void Afficher();

    Hache(std::string Qualifiant, int Degats);

    Hache();

    ~Hache();

    int Frapper();


 private:
    std::string m_GenreArme;
    std::string m_NomQualifiant;
};

#endif // Hache_h
