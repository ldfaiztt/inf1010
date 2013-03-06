/****************************************************************************
 * Fichier: Cercle.cpp
 * Auteur: Martin Bisson
 * Date: 27 ao�t 2009
 * Description: Impl�mentation de la classe Cercle
 ****************************************************************************/

#include "Cercle.h"


/****************************************************************************
 * Fonction:	Cercle::Cercle
 * Description: Constructeur par d�faut
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Cercle::Cercle()
{
	cout << "Constructeur par defaut de Cercle" << endl;
    rayon_ = 0.0;
}

/****************************************************************************
 * Fonction:	Point::~Point
 * Description: Destructeur.
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Cercle::~Cercle()
{
    cout << "Destructeur de Cercle" << endl;
}
