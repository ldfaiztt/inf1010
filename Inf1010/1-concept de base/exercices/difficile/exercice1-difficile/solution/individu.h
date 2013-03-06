/****************************************************************************
 * Fichier: individu.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 25 janvier 2010
 * Description: D�finition de la classe Individu
 ****************************************************************************/

#ifndef _INDIVIDU_H_
#define _INDIVIDU_H_

#include <string>

using namespace std;

class Individu
{
public:
	Individu(); // Constructeur par d�faut.
	Individu(string nom, int age); // Constructeur par param�tres. 

	string getNom();
	int getAge(); 

	void setAge(int age);
	void setNom(string nom);

	bool memeAge(Individu indiv); // R�f�rence constante sur Individu

private:
	string nom_;
	int age_;
};

#endif