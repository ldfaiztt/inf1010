/****************************************************************************
 * Fichier: Point3D.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 22 janvier 2009
 * Mise a jour : 6 juin 2011
 * Description: Impl�mentation de la classe Point3D
 ****************************************************************************/

#include "Point3d.h"
#include <iostream>

using namespace std;

/****************************************************************************
 * Fonction: Point3d:Point3d
 * Description: Constructeur par d�faut
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/
Point3d::Point3d()
{
	x_ = 0.0;
	y_ = 0.0;
	z_ = 0.0;
}


/****************************************************************************
 * Fonction: Point3d:Point3d
 * Description: Constructeur par param�tres
 * Param�tres: - double x: valeur de x_
 *             - double y: valeur de y_
 *             - double z: valeur de z_
 * Retour: aucun
 ****************************************************************************/
Point3d::Point3d(double x, double y, double z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

/****************************************************************************
 * Fonction: Point3d:getX
 * Description: Retourne x_
 * Param�tres: aucun
 * Retour: (double) la valeur de x_
 ****************************************************************************/
double Point3d::getX()
{
	return x_;
}

/****************************************************************************
 * Fonction: Point3d:getY
 * Description: Retourne y_
 * Param�tres: aucun
 * Retour: (double) la valeur de y_
 ****************************************************************************/
double Point3d::getY()
{
	return y_;
}

/****************************************************************************
 * Fonction: Point3d:getZ
 * Description: Retourne z_
 * Param�tres: aucun
 * Retour: (double) la valeur de z_
 ****************************************************************************/
double Point3d::getZ()
{
	return z_;
}

/****************************************************************************
 * Fonction: Point3d:setX
 * Description: Modifie x_
 * Param�tres: - double x: la nouvelle valeur de x_
 * Retour: aucun
 ****************************************************************************/
void Point3d::setX(double x)
{
	x_ = x;
}

/****************************************************************************
 * Fonction: Point3d:setY
 * Description: Retourne y_
 * Param�tres: - double y: la nouvelle valeur de y_
 * Retour: aucun
 ****************************************************************************/
void Point3d::setY(double y)
{
	y_ = y;
}

/****************************************************************************
 * Fonction: Point3d:setZ
 * Description: Retourne z_
 * Param�tres: - double z: la nouvelle valeur de z_
 * Retour: aucun
 ****************************************************************************/
void Point3d::setZ(double z)
{
	z_ = z;
}

/****************************************************************************
 * Fonction: Point3d:move
 * Description: D�place un point
 * Param�tres: - double x: valeur de x_
 *             - double y: valeur de y_
 *             - double z: valeur de z_
 * Retour: aucun
 ****************************************************************************/
void Point3d::move(double x, double y, double z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

/****************************************************************************
 * Fonction: Point3d:reset
 * Description: Place le point � l'origine
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Point3d::reset()
{
	x_ = 0;
	y_ = 0;
	z_ = 0;
}

/****************************************************************************
 * Fonction: Point3d:imprimer
 * Description: Affiche les coordonn�es
 * Param�tres: aucun
 * Retour: aucun
 ****************************************************************************/

void Point3d::imprimer()
{
	cout << "x: " << x_ << " y: " << y_ << " z: " << z_ << endl; 
}