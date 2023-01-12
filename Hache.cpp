#include "Hache.h"
#include <iostream>
using namespace std; 





Hache::Hache() : Arme()
{
	cout << "Constructeur de Hache" << endl;
}

Hache::Hache(string Qualifiant, int Degats) : Arme("Hache " + Qualifiant, Degats)
{
	cout << "Constructeur surcharge de Hache" << endl;
	m_GenreArme = "Hache ";
    m_NomQualifiant =  Qualifiant;
	// On initialise les  membres de Arme
	m_degats = Degats; 
	m_NomComplet = m_GenreArme +  m_NomQualifiant;

}




void Hache::Afficher()
{
	cout << "Arme : " << Arme::m_NomComplet << " Degats  : " << Arme::m_degats << endl;
}

int Hache::Frapper()

{
    cout << "Coup de Hache " << m_NomQualifiant << endl;
	return m_degats;
}

Hache::~Hache()

{
	cout << "Destructeur de Hache" << endl;
}
