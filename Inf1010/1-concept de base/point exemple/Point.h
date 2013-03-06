/****************************************************************************
 * Fichier: Point.h
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 11 mai 2011
 * Description: D�finition de la classe Point
 ****************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_  //Si la classe Point n'a pas �t� cr��e, cr�er la classe

#include <iostream>
using namespace std;

class Point
{
public:
	Point(); // constructeur par d�faut
	Point(double x, double y);

	// Methodes d'acces
	double getX();
	double getY();

	// Methodes de modification
	void setX(double x);
	void setY(double y);

private:
	double x_;
	double y_;
};

#endif // _POINT_H_
