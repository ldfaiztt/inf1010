/****************************************************************************
 * Fichier: Hotel.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 f�vrier 2010
 * Description: Impl�mentation de la classe Hotel
 ****************************************************************************/

#include "Hotel.h"

/****************************************************************************
 * Fonction: Hotel::Hotel
 * Description: Constructeur par param�tres
 * Param�tres: string: valeur de nom_, int: valeur de nombreEmployes_, 
 *                     double: valeur de chiffreAffaire_, int: valeur de nombreChambres_
 * Retour: aucun
 ****************************************************************************/

Hotel::Hotel(const string &nom, int nombreEmployes, double chiffreAffaire, int nombreChambres)
: Entreprise(nom,nombreEmployes,chiffreAffaire)
{
	nombreChambres_ = nombreChambres;
	bidon_ = new int(4);

	cout << "Constr: Hotel" << endl;
}

/****************************************************************************
 * Fonction: Hotel::afficheInfo
 * Description: Affichage des valeurs de attributs � l'�cran
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Hotel::afficheInfo() const
{
	cout << "Info Hotel" << endl;
	cout << nombreChambres_ << endl;
	Entreprise::afficheInfo();
}

/****************************************************************************
 * Fonction: Hotel::~Hotel
 * Description: Destructeur
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

Hotel::~Hotel()
{
	delete bidon_;
	cout << "Dest: Hotel" << endl;
}

/****************************************************************************
 * Fonction: Hotel::afficheType
 * Description: Affiche le type de l'objet � l'�cran
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Hotel::afficheType() const
{
	cout << "Hotel!" << endl;
}