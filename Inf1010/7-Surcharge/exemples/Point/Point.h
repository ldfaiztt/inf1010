/****************************************************************************
 * Fichier: Point.h
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 12 mai 2011
 * Description: D�finition de la classe Point
 ****************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
using namespace std;

class Point
{
public:
	Point();
	Point(double x, double y);
    ~Point();

	double getX() const;
	double getY() const;

	void setX(double x);
	void setY(double y);

    void print();

    // Exemple d'op�rateur d�fini � l'int�rieur de la classe.
    Point operator+ ( const Point& point ) const;
    // Exemple d'op�rateur bool�en
    bool operator< (const Point& point ) const;

private:
	double x_;
	double y_;
};


// Exemple d'operateur d�fini � l'ext�rieur de la classe sans friend
Point operator* ( const Point& p1 , const Point& p2 );
// Exemple de surcharge de l'op�rateur de flux.
ostream& operator <<( ostream& out , const Point& point );


#endif // _POINT_H_
