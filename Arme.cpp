#include "Arme.h"
#include <iostream>
using namespace std; 

//-- constrcuteur aves initialisation attributs (protected & private) 
Arme::Arme()
{
	m_degats = 10;
	m_test1 = 100; 
	m_test2 = 'o'; 
	m_NomComplet = "inconnu";
	cout << "Constructeur par defaut de Arme" << endl;
}


Arme::Arme(string Nom, int Degats)
{
	m_degats = Degats ;
    m_NomComplet = Nom;
	cout << "Constructeur surcharge de Arme" << endl;
}

//-- constructeur 
Arme::Arme(int infoTest1, char infoTest2)
{
	m_test1 = infoTest1; 
	m_test2 = infoTest2; 
}




void Arme::Afficher()
{

}

int Arme::Frapper()
{
	return 0;
}

Arme::~Arme()
{
	cout << "Destructeur de Arme" << endl;
}



