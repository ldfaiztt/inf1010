/****************************************************************************
 * Fichier: Mission.h
 * Auteur: William Bussiere
 * Date: 21 juin 2011
 * Description: Definition de la classe Mission et de la structure Checkpoint
 ****************************************************************************/

#ifndef _MISSION_H_
#define _MISSION_H_

#include <string>
#include <vector>
#include <iostream>
using namespace std;


struct Checkpoint
{
	string nom;
	int x;
	int y;

	Checkpoint(string nom_, int x_, int y_) 
		: nom(nom_), x(x_), y(y_){}	
};


class Mission
{
public :
	Mission(const string& nom, const string& description);
	~Mission();

	void   setNom(const string& nom);
	string getNom() const;

	void   setDescription(const string& description);
	string getDescription() const;

	void ajouterCheckpoint(const Checkpoint& checkpoint);

	void afficher() const;

private :
	string nom_;
	string description_;
	vector<Checkpoint> checkpoints_;
};

#endif