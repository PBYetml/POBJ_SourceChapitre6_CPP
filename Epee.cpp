#include "Epee.h"
#include <iostream>
using namespace std; 


//-- constructeur sans lien avec la class parents
Epee::Epee()
{
	cout << "Constructeur sans lien avec les parent" << endl;
}

//-- constructeur par défaut --// 
Epee::Epee() : Arme()
{
	cout << "Constructeur normal de Epee" << endl;
}


//-- constructeur surcharge --//
Epee::Epee(string Qualifiant, int Degats)
{
	// Arme("Epee" + Qualifiant, Degats);
	m_NomComplet = "Epee" + Qualifiant; 
	m_degats = Degats; 

	cout << "Constructeur surcharge de Epee" << endl;
	m_GenreArme = "Epee ";
	m_NomQualifiant = Qualifiant;


	// On initialise les  membres de Arme
	// m_degats = Degats; 
	// m_NomComplet = m_GenreArme +  m_NomQualifiant;
}

Epee::Epee(string Qualifiant, int Degats) : Arme(200, 'n')
{

}

void Epee::Afficher()
{
   cout << "Arme : " <<  Arme::m_NomComplet  << " Degats  : "  << Arme::m_degats << endl; 
}


int Epee::Frapper()
{
    cout << "Coup d'Epee " << m_NomQualifiant << endl;
	return m_degats;
}


Epee::~Epee()
{
	cout << "Destructeur de Epee" << endl;
}
