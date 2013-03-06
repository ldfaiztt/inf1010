/****************************************************************************
 * Fichier: Adresse.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 f�vrier 2010
 * Description: Impl�mentation de la classe Adresse
 ****************************************************************************/

#include "Adresse.h"
#include <iostream>
using namespace std;

/****************************************************************************
 * Fonction: Adresse::Adresse
 * Description: Constructeur par param�tres
 * Param�tres: string: valeur de rue_
 * Retour: aucun
 ****************************************************************************/

Adresse::Adresse(const string &rue)
{
	rue_ = rue;
	cout << "Constr: Adresse" << endl;
}

/****************************************************************************
 * Fonction: Adresse::getRue
 * Description: Retourne la valeur de rue_
 * Param�tres: aucun
 * Retour: string: la valeur de rue_
 ****************************************************************************/

string Adresse::getRue()
{
	return rue_;
}

/****************************************************************************
 * Fonction: Adresse::setRue
 * Description: Modifie la valeur de rue_
 * Param�tres: string: la nouvelle valeur de rue_
 * Retour: aucun
 ****************************************************************************/

void Adresse::setRue(const string &rue)
{
	rue_ = rue;
}