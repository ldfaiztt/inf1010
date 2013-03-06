#include "Ordinateur.h"



//Il faut utiliser un constructeur par parametre et une liste d'initialisation
//pour utiliser une variable membre de type reference
/****************************************************************************
 * Fonction:	Ordinateur::Ordinateur
 * Description: Constructeur par defaut
 * Param�tres:	(Ecran) moniteur : Une reference a un objet Ecran
 * Retour:		aucun
 ****************************************************************************/
Ordinateur::Ordinateur(Ecran& moniteur):ecranOrdi_(moniteur), prix_ (0.0),ecran_(0)
{
	
}

/****************************************************************************
 * Fonction:	Ordinateur::~Ordinateur
 * Description: Destructeur par defaut
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Ordinateur::~Ordinateur()
{
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirProcesseur
 * Description: permet de modifier l'objet membre processeur_
 * Param�tres:	(Processeur) unProcesseur : r�f�rence constante
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirProcesseur(const Processeur& unProcesseur)
{
	processeur_ = unProcesseur;
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirHDD
 * Description: permet de modifier l'objet membre disqueDur_
 * Param�tres:	(HDD) disque : r�f�rence constante
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirHDD(const HDD& disque)
{
	disqueDur_ = disque;

}
/****************************************************************************
 * Fonction:	Ordinateur::choisirRAM
 * Description: permet de modifier l'objet membre memoireVive_
 * Param�tres:	(RAM) disque : r�f�rence constante
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirRAM(const RAM& memoire)
{
	memoireVive_ = memoire;
}


/****************************************************************************
 * Fonction:	Ordinateur::choisirEcranParReference
 * Description: permet de modifier l'objet membre ecranOrdi_
 * Param�tres:	(Ecran) disque : r�f�rence 
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirEcranParReference(Ecran& moniteur)
{
	ecranOrdi_ = moniteur;
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirEcran
 * Description: permet de modifier l'objet membre ecran_
 * Param�tres:	(Ecran) disque : r�f�rence 
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirEcranParPointeur(Ecran& moniteur)
{
	ecran_ = &moniteur;
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirEcran
 * Description: permet de modifier l'objet membre ecran_
 * Param�tres:	(Ecran) disque : pointeur 
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirEcranParPointeur(Ecran* moniteur)
{
	ecran_ = moniteur;
}
/****************************************************************************
 * Fonction:	Ordinateur::obtenirPrix
 * Description: permet d'obtenir la variable membre prix_
 * Param�tres:	aucun 
 * Retour:		aucun
 ****************************************************************************/
double Ordinateur::obtenirPrix() const
{
	return prix_;
}



/****************************************************************************
 * Fonction:	Ordinateur::afficherSpecOrdi
 * Description: fonction d'affichage
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::afficherSpecOrdi() const
{
	ecranOrdi_.afficherSpecEcran(); //si on veux utiliser agregation par reference
	ecran_->afficherSpecEcran(); //si on veux utiliser agregation par pointeur
	memoireVive_.afficherSpecRAM();
	disqueDur_.afficherSpecDisque();
	processeur_.afficherSpecProcesseur();

	cout << endl << endl <<" le prix est $" << obtenirPrix() << endl;

}
/****************************************************************************
 * Fonction:	Ordinateur::calculerPrix
 * Description: modifier la valeur de la variables prix_ en appellant obtenirPrix
 *              des variables membres
 * Param�tres:	(double) fraisAssemblage : par d�faut = 100.0
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::calculerPrix(double fraisAssemblage)
{
	prix_ = 0;
	prix_ += ecranOrdi_.obtenirPrix(); //si on veux utiliser agregation par reference
	prix_ += ecran_->obtenirPrix(); //si on veux utiliser agregation par pointeur
	prix_ += memoireVive_.obtenirPrix();
	prix_ += disqueDur_.obtenirPrix();
	prix_ += processeur_.obtenirPrix();
	prix_ += fraisAssemblage;
}
