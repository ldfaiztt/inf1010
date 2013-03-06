#include "Livre.h"

Livre::Livre(int nbChapitres)
{
	Chapitre *nouveau;
	for(int i=0; i<nbChapitres; i++)
	{
		nouveau=new Chapitre;
		tabChapitres_.push_back(nouveau);
	}
}

Livre::~Livre()
{
	//Doit lib�rer la m�moire utilis�e par les chapitres
	//avant la destruction du vecteur
	for (int i=0;i<tabChapitres_.size();i++)
	{
		delete tabChapitres_[i];
	}
}