/****************************************************************************
 * Fichier: Cercle1.h
 * Auteur: Martin Bisson
 * Date: 9 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Impl�mentation de la classe Cercle1
 ****************************************************************************/

#include "Cercle1.h"


/****************************************************************************
 * Fonction: Cercle1::Cercle1
 * Description: Constructeur par d�faut
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Cercle1::Cercle1()
	: x_( 0.0 ) , y_( 0.0 ) , radius_( 0.0 )
{
	cout << "Constructeur par defaut de Cercle1" << endl;
}


/****************************************************************************
 * Fonction: Cercle1::Cercle1
 * Description: Constructeur par param�tres
 * Param�tres: - double x: valeur de x_ (IN)
 *             - double y: valeur de y_ (IN)
 *             - double radius: valeur de radius_ (IN)
 * Retour: aucun
 ****************************************************************************/
Cercle1::Cercle1(double x, double y, double radius)
	: x_( x ) , y_( y ) , radius_( radius )
{
    cout << "Constructeur par parametre du Cercle1 : ";
    print();
}


/****************************************************************************
 * Fonction: Cercle1::~Cercle1
 * Description: Destructeur.
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Cercle1::~Cercle1()
{
    cout << "Destructeur du Cercle1 : ";
    print();
}


/****************************************************************************
 * Fonction: Cercle1::getX
 * Description: Retourne l'abscisse du centre du cercle
 * Param�tres: aucun
 * Retour: (double) la valeur de l'abscisse du centre du cercle
 ****************************************************************************/
double Cercle1::getX() const
{
	return x_;
}


/****************************************************************************
 * Fonction: Cercle1::getY
 * Description: Retourne l'ordonn�e du centre du cercle
 * Param�tres: aucun
 * Retour: (double) la valeur de l'ordonn�e du centre du cercle
 ****************************************************************************/
double Cercle1::getY() const
{
	return y_;
}


/****************************************************************************
 * Fonction: Cercle1::getRadius
 * Description: Retourne le rayon du cercle
 * Param�tres: aucun
 * Retour: (double) la valeur du rayon du cercle
 ****************************************************************************/
double Cercle1::getRadius() const
{
	return radius_;
}


/****************************************************************************
 * Fonction: Cercle1::print
 * Description: Affiche le cercle.
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
void Cercle1::print() const
{
	cout << "Cercle1 de centre ( " << getX() << " , " << getY()
         << " ) et de rayon " << getRadius() << endl;
}
