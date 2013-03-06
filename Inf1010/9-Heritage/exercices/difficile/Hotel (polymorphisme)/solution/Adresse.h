/****************************************************************************
 * Fichier: Adresse.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 f�vrier 2010
 * Description: D�finition de la classe Adresse
 ****************************************************************************/

#ifndef _ADRESSE_H_
#define _ADRESSE_H_

#include <string>
using namespace std;

class Adresse
{
public:
	Adresse(const string &rue="Sans nom");
	string getRue();
	void setRue(const string &rue);
private:
	string rue_;
};

#endif