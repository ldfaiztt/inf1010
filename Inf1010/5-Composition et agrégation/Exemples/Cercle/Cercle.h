/****************************************************************************
 * Fichier: Point.h
 * Auteur: Martin Bisson
 * Date: 27 ao�t 2009
 * Description: D�finition de la classe Cercle
 ****************************************************************************/

#ifndef _CERCLE_H_
#define _CERCLE_H_

#include "Point.h"

#include <iostream>
using namespace std;

class Cercle
{
public:
    // Constructeur par d�faut.
	Cercle();
    // Destructeur.
    ~Cercle();

private:
    Point centre_; // Composition
    double rayon_;

};

#endif // _CERCLE_H_
