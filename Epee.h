#ifndef Epee_h
#define Epee_h

#include "Arme.h"


class Epee : public Arme {

 public:

    void Afficher();

    Epee(std::string Qualifiant, int Degats);

    Epee();

    ~Epee();

    int Frapper();


 private:
    std::string m_GenreArme;
    std::string m_NomQualifiant;
};

#endif // Epee_h
