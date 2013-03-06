/****************************************************************************
 * Fichier: Compteur.cpp
 * Auteurs: - Georges Abou-Khalil
 *          -
 *          -
 * Date: 16 sept 2008
 * Description: Impl�mentation de la classe Compteur
 ****************************************************************************/

#include "Compteur.h"
#include <iostream>

using namespace std;

/****************************************************************************
 * Fonction: Compteur::Compteur
 * Description: Constructeur par param�tre
 * Param�tres: - unsigned int nb: la valeur initiale du compteur
 * Retour: aucune
 ****************************************************************************/
Compteur::Compteur(int nb)
{
	ptrNb_ = new int(nb);
}

/****************************************************************************
 * Fonction: Compteur::getNb
 * Description: retourne la valeur du compteur
 * Param�tres: aucun
 * Retour: (int) la valeur du compteur
 ****************************************************************************/
int Compteur::getNb() const
{
	return *ptrNb_;
}

/****************************************************************************
 * Fonction: Compteur::inc
 * Description: incr�mente le compteur
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Compteur& Compteur::inc()
{
	(*ptrNb_)++;
	return *this;
}

/****************************************************************************
 * Fonction: Compteur::dec
 * Description: decr�mente le compteur
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Compteur& Compteur::dec()
{
	(*ptrNb_)--;
	return *this;
}
