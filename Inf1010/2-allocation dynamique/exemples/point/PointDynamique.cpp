/****************************************************************************
 * Fichier: PointDynamique.cpp
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 16 mai 2011
 * Description: Impl�mentation de la classe PointDynamique
 ****************************************************************************/

#include "PointDynamique.h"


/****************************************************************************
 * Fonction:	PointDynamique::PointDynamique
 * Description: Constructeur par d�faut
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
PointDynamique::PointDynamique()
{
	cout << "Constructeur par defaut de PointDynamique" << endl;
    point_ = new Point;
}

/****************************************************************************
 * Fonction:	PointDynamique::PointDynamique
 * Description: Constructeur par param�tres
 * Param�tres:	- (double) x: valeur de x_ (IN)
 *				- (double) y: valeur de y_ (IN)
 * Retour:		aucun
 ****************************************************************************/
PointDynamique::PointDynamique(double x, double y)
{
    cout << "Constructeur par parametre du PointDynamique ( "
         << x << " , " << y << " )" << endl;
    point_ = new Point( x , y );
}

/****************************************************************************
 * Fonction:	PointDynamique::~PointDynamique
 * Description: Destructeur.
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
PointDynamique::~PointDynamique()
{
    double x = point_->getX();
    double y = point_->getY();
    delete point_;
    cout << "Destructeur du PointDynamique ( "
         << x << " , " << y << " )" << endl;
}

/****************************************************************************
 * Fonction:	PointDynamique::getX
 * Description: Retourne x_
 * Param�tres:	aucun
 * Retour:		(double) la valeur de x_
 ****************************************************************************/
double PointDynamique::getX()
{
	return point_->getX();
}

/****************************************************************************
 * Fonction:	PointDynamique::getY
 * Description: Retourne y_
 * Param�tres:	aucun
 * Retour:		(double) la valeur de y_
 ****************************************************************************/
double PointDynamique::getY()
{
	return point_->getY();
}

/****************************************************************************
 * Fonction:	PointDynamique:setX
 * Description: Modifie x_
 * Param�tres:	- (double) x: la nouvelle valeur de x_ (IN)
 * Retour:		aucun
 ****************************************************************************/
void PointDynamique::setX(double x)
{
    point_->setX(x);
}

/****************************************************************************
 * Fonction:	PointDynamique:setY
 * Description: Retourne y_
 * Param�tres:	- (double) y: la nouvelle valeur de y_ (IN)
 * Retour:		aucun
 ****************************************************************************/
void PointDynamique::setY(double y)
{
	point_->setY(y);
}

/****************************************************************************
 * Fonction:	PointDynamique::print
 * Description: Affiche le point_.
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void PointDynamique::print()
{
    point_->print();
}
