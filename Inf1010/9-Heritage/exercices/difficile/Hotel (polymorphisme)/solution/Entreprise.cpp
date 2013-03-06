/****************************************************************************
 * Fichier: Entreprise.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 f�vrier 2010
 * Description: Impl�mentation de la classe Entreprise
 ****************************************************************************/

#include "Entreprise.h"

/****************************************************************************
 * Fonction: Entreprise::Entreprise
 * Description: Constructeur par param�tres
 * Param�tres: string: valeur de nom_, int: valeur de nombreEmployes_, double: valeur de chiffreAffaire_
 * Retour: aucun
 ****************************************************************************/

Entreprise::Entreprise(const string &nom, int nombreEmployes, double chiffreAffaire)
{
	nom_ = nom;
	nombreEmployes_ = nombreEmployes;
	chiffreAffaire_ = chiffreAffaire;

	cout << "Constr: Entreprise" << endl;
}

/****************************************************************************
 * Fonction: Entreprise::afficheInfo
 * Description: Affichage des valeurs de attributs � l'�cran
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Entreprise::afficheInfo() const
{
	cout << "Info Entreprise" << endl;
	cout << nom_ << " " << nombreEmployes_ << " " << chiffreAffaire_ << endl;
}

/****************************************************************************
 * Fonction: Entreprise::incrEmploye
 * Description: Incr�mente nombreEmployes_
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Entreprise::incrEmploye()
{
	nombreEmployes_++;
	afficheInfo();
}

/****************************************************************************
 * Fonction: Entreprise::~Entreprise
 * Description: Destructeur
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

Entreprise::~Entreprise()
{
}

/****************************************************************************
 * Fonction: Entreprise::afficheType
 * Description: Affiche le type de l'objet � l'�cran
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Entreprise::afficheType() const
{
	cout << "Entreprise!" << endl;
}