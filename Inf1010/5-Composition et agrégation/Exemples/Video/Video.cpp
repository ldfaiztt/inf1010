/****************************************************************************
 * Fichier: Video.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 18 janvier 2010
 * Mise a jour : 12 mai 2011
 * Description: Impl�mentation de la classe Video
 ****************************************************************************/

#include "Video.h"


/****************************************************************************
 * Fonction:	Video::Video
 * Description: Constructeur par d�faut
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Video::Video()
	:nom_("Sans titre"),duree_(0),nbImagesSec_(0)
{
	// Initialise les pointeurs � z�ro
	for(int i=0;i<10;i++) 
		image_[i]=0;

	cout << "Constructeur par defaut (Video)" << endl;
}


/****************************************************************************
 * Fonction:	Video:~Video
 * Description: Destructeur par d�faut
 * Param�tres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Video::~Video()
{
	for(int i=0;i<10;i++)
		image_[i]=0;
}


/****************************************************************************
 * Fonction:	Video::setNbImagesSec
 * Description: Modifie nbImagesSec_
 * Param�tres:	- (float) nbImagesSec : nouvelle valeur de nbImagesSec_ (IN)
 * Retour:		(bool) Succ�s ou �chec
 ****************************************************************************/
bool Video::setNbImagesSec(float nbImagesSec)
{
	if(nbImagesSec>0)
	{
		nbImagesSec_=nbImagesSec;
		return true;
	}

	return false;
}


/****************************************************************************
 * Fonction:	Video::setImage
 * Description: Modifie image_
 * Param�tres:	- (Image*) image : Une nouvelle image_ (IN)
 *				- (int) position : La position de l'image dans le tableau (IN)
 * Retour:		(bool) Succ�s ou �chec
 ****************************************************************************/
bool Video::setImage(Image* image, int position)
{
	if(position>=0 && position <10)
	{
		image_[position]=image;
		return true;
	}

	return false;
}

	
/****************************************************************************
 * Fonction:	Video::setDuree
 * Description: Modifie duree_
 * Param�tres:	- (float) duree: la nouvelle valeur de duree_ (IN)
 * Retour:		(bool) Succ�s ou �chec
 ****************************************************************************/
bool Video::setDuree(float duree)
{
	if(duree>0)
	{
		duree_=duree;
		return true;
	}

	return false;
}


/****************************************************************************
 * Fonction:	Video::setNom
 * Description: Modifie nom_
 * Param�tres:	- (float) nom: la nouvelle valeur de nom_ (IN)
 * Retour:		(bool) Succ�s ou �chec
 ****************************************************************************/
void Video::setNom(string nom)
{
	nom_=nom;
}


/****************************************************************************
 * Fonction:	Video::getNbImagesSec
 * Description: Retourne nbImagesSec_
 * Param�tres:	aucun
 * Retour:		(float) la valeur de nbImagesSec_
 ****************************************************************************/
float Video::getNbImagesSec() const
{
	return nbImagesSec_;
}


/****************************************************************************
 * Fonction:	Video::getImage
 * Description: Retourne image_ � position
 * Param�tres:	- (int) position: la position de l'image dans la video (IN)
 * Retour:		(Image*) la valeur de image_
 ****************************************************************************/
Image* Video::getImage(int position) const
{
	if(position>=0 && position<10)
		return image_[position];
	else
		return 0;
}


/****************************************************************************
 * Fonction:	Video::getDuree
 * Description: Retourne duree_
 * Param�tres:	aucun
 * Retour:		(float) la valeur de duree_
 ****************************************************************************/	
float Video::getDuree() const
{
	return duree_;
}


/****************************************************************************
 * Fonction:	Video::getNom
 * Description: Retourne nom_
 * Param�tres:	aucun
 * Retour:		(string) la valeur de nom_
 ****************************************************************************/
string Video::getNom() const
{
	return nom_;
}
