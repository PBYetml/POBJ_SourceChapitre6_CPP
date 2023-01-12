#ifndef Arme_h
#define Arme_h
#include <string>

class Arme {

 public:

    virtual void Afficher();

    Arme(std::string Nom, int Degats);

    Arme(int infoTest1, char infoTest2); 

    Arme();

    virtual ~Arme();
	
    virtual int Frapper();


 protected:
    int m_degats;
    std::string m_NomComplet;

private: 
    int m_test1; 
    char m_test2; 

};

#endif // Arme_h
