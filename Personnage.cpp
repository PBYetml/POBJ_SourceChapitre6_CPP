#include "Personnage.h"

#include "Arme.h"


void Personnage::boirePotionDeVie(int Quantite)
{
    
}


void Personnage::Attaquer(Personnage &Cible)
{
	Cible.RecevoirDegats(Personnage::myArme->Frapper());  
}


void Personnage::RecevoirDegats(int nbDegats)
{
	m_vie = m_vie - nbDegats;   
}


int Personnage::GetVie()
{
    return m_vie;
}


Personnage::Personnage()
{
	m_vie = 100;
}


Personnage::Personnage(int ValVie)
{
	m_vie = ValVie;
}

