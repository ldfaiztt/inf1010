/****************************************************************************
 * Fichier: Cercle2.h
 * Auteur: Martin Bisson
 * Date: 9 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Impl�mentation de la classe Cercle2
 ****************************************************************************/

#include "Cercle2.h"


/****************************************************************************
 * Fonction: Cercle2::Cercle2
 * Description: Constructeur par d�faut
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Cercle2::Cercle2()
	: point_() , radius_( 0.0 )
{
	cout << "Constructeur par defaut de Cercle2" << endl;
}

/****************************************************************************
 * Fonction: Cercle2::Cercle2
 * Description: Constructeur par param�tres
 * Param�tres: - double x: valeur de x_ (IN)
 *             - double y: valeur de y_ (IN)
 *             - double radius: valeur de radius_ (IN)
 * Retour: aucun
 ****************************************************************************/
Cercle2::Cercle2(double x, double y, double radius)
	: point_( x , y ) , radius_( radius )
{
    cout << "Constructeur par parametre du Cercle2 : ";
    print();
}

/****************************************************************************
 * Fonction: Cercle2::~Cercle2
 * Description: Destructeur.
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Cercle2::~Cercle2()
{
    cout << "Destructeur du Cercle2 : ";
    print();
}

/****************************************************************************
 * Fonction: Cercle2::getX
 * Description: Retourne l'abscisse du centre du cercle
 * Param�tres: aucun
 * Retour: (double) la valeur de l'abscisse du centre du cercle
 ****************************************************************************/
double Cercle2::getX() const
{
	return point_.getX();
}

/****************************************************************************
 * Fonction: Cercle2::getY
 * Description: Retourne l'ordonn�e du centre du cercle
 * Param�tres: aucun
 * Retour: (double) la valeur de l'ordonn�e du centre du cercle
 ****************************************************************************/
double Cercle2::getY() const
{
	return point_.getY();
}

/****************************************************************************
 * Fonction: Cercle2::getRadius
 * Description: Retourne le rayon du cercle
 * Param�tres: aucun
 * Retour: (double) la valeur du rayon du cercle
 ****************************************************************************/
double Cercle2::getRadius() const
{
	return radius_;
}

/****************************************************************************
 * Fonction: Cercle2::print
 * Description: Affiche le cercle.
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
void Cercle2::print() const
{
	cout << "Cercle2 de centre ( " << getX() << " , " << getY()
         << " ) et de rayon " << getRadius() << endl;
}
