/**********************************************************************
/* Fichier: Triangle.cpp
/* Date: 02 f�vrier 2013
/* Auteur: Marie-France et Odric
/* Description: Le code d�crivant la fonctionnalit� du Triangle.h
************************************************************************/
#include <vector>
#include <iostream>
#include <string>

using namespace std;

#include "Triangle.h"

/***************************************************************************/
/* Nom: Constructeur par d�faut                                            */
/* Description: Constructeur appel� lorsqu'aucun param�tre n'est entr�     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un triangle � une taille de 1      */
/*			et initialise ses valeurs � 0.   	                		   */
/*                     													   */
/***************************************************************************/

Triangle::Triangle()
{
    triangle_.resize(1);
    for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j <=i; j++)
	 		 triangle_[i][j] = 0;
    }
}

/***************************************************************************/
/* Nom: Constructeur par param�tre � un param�tre                          */
/* Description: Constructeur appel� lorsqu'un seul param�tre est entr�,    */
/*				soit la taille                                             */
/* Parametres: taille (IN) : taille du triangle � cr�er  			       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un triangle � la taille demand�e   */
/*			et initialise ses valeurs � 0.   	                		   */
/*                     													   */
/***************************************************************************/

Triangle::Triangle(int taille)
{
    triangle_.resize(taille);
    for (int i = 0; i < triangle_.size(); i++)
	 	 triangle_[i].resize(i+1);
    for (int i = 0; i < triangle_.size(); i++)
    {
   		 for (int j = 0; j < triangle_[i].size(); j++)
	 		 triangle_[i][j] = 0;
    }
}

/***************************************************************************/
/* Nom: Constructeur par param�tre � deux param�tres                       */
/* Description: Constructeur appel� lorsqu'un seul param�tre est entr�,    */
/*				soit la taille                                             */
/* Parametres: taille (IN) : taille du triangle � cr�er                    */
/*                donnees (IN/OUT) : valeurs contenues dans le triangle      */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un triangle � la taille demand�e   */
/*			et initialise ses valeurs � 0.   	                		   */
/*                     													   */
/***************************************************************************/
Triangle::Triangle( int taille, int *donnees )
{
    int k = 0;
    triangle_.resize(taille);
    for (int i = 0; i < triangle_.size(); i++)
   		 triangle_[i].resize(i+1);
    for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j < triangle_[i].size(); j++)
		 {
	 		 triangle_[i][j] = donnees[k];
			 k++;
   		 }
    }
}

/***************************************************************************/
/* Nom: Constructeur par copie                                             */
/* Description: Constructeur ayant comme param�tre un triangle � copier    */
/* Parametres: t (OUT) : Un objet de type Triangle   				       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Comme les vecteurs sont copi�s en deep copy par d�faut,       */
/*           chaque valeurs sont recopier m�me si on ne les copie pas      */
/*           une par une                                                   */
/*                     													   */
/***************************************************************************/

Triangle::Triangle( Triangle& t )
{
	
	triangle_ = t.triangle_;
}

/***************************************************************************/
/* Nom: Desctructeur                                                       */
/* Description: Afin de liberer de la m�moire, le destructeur peut         */
/*              �tre appeler afin de d�truire un objet de type Triangle    */
/* Parametres: Aucun    							     			       */
/* Valeur de retour: Aucune                                                */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

Triangle::~Triangle()
{

}

int Triangle::getTaille() const
{
    return triangle_.size();
}

/***************************************************************************/
/* Nom: Poids                                                              */
/* Description: Cette fonction effectue le calcul du poid d'un triangle    */
/* Parametres: Aucun    											       */
/* Valeur de retour: somme[] : une  valeur de type double contenue         */
/*                   � la fin d'un vecteur                                 */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

double Triangle::poids()
{
    vector<double> somme(triangle_.size()+1);
    for (int i = 0; i < somme.size(); i++)
    {
   		somme[i] = 0;
    }
    for (int i = 0; i < triangle_.size(); i)
    {
	   	 for (int j = 0; j <= i; j++)
		 {
			somme[i] += triangle_[i][j];
	 	 }
	 	 somme[i] /= ++i;
    }
    for (int i = 0; i < triangle_.size(); i++)
	{
	 	 somme[triangle_.size()] += somme[i];
	}
    return somme[triangle_.size()];
}

/***************************************************************************/
/* Nom: operator[]                                                         */
/* Description: Comme les vecteurs n'acceptent pas deux dimensions,        */
/*              il faut sucharger l'op�rateur [] afin d'avoir la valeur    */
/*              contenue dans le vecteur contenu dans le vecteur de vecteur*/
/* Parametres: i (IN) : une valeur enti�re    						       */
/* Valeur de retour: vector<int>& : L'adresse du vecteur de int contenue   */ 
/*                   dans le vecteur de vecteur                            */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

vector<int>& Triangle::operator[]( int i )
{
    return triangle_[i];
}

/***************************************************************************/
/* Nom: operator=                                                          */
/* Description: Surcharge de l'op�rateur �gal afin que l'adresse d'un      */
/*              triangle soit = � celle du triangle en param�tre           */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle&                                             */
/* Remarque: Agit un peu comme le constructeur par copie   			       */
/*                     													   */
/***************************************************************************/

Triangle& Triangle::operator=( const Triangle& t )
{
   	 triangle_ = t.triangle_;
   	 return *this;
}

/***************************************************************************/
/* Nom: operator+                                                          */
/* Description: Surcharge de l'op�rateur plus afin de pouvoir additionner  */
/*              les valeurs de deux triangles ensembles                    */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque:                                            			       */
/*                     													   */
/***************************************************************************/
Triangle Triangle::operator+( const Triangle & t )
{
	int taille = 0;
	for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j < triangle_[i].size(); j++)
   		 {
   			 taille++;
		 }
    }
	int* somme = new int[taille];
	int position = 0;
    for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j <= i; j++)
		 {
   			 somme[position] = triangle_[i][j] + t.triangle_[i][j];
			 position++;
		 }
    }
	Triangle resultat(triangle_.size(), somme);
    return resultat;
}

/***************************************************************************/
/* Nom: operator*                                                          */
/* Description: Surcharge de l'op�rateur * afin de pouvoir multiplier      */
/*              les valeurs de deux triangles ensembles                    */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque:                                            			       */
/*                     													   */
/***************************************************************************/


Triangle Triangle::operator*( const Triangle& t )
{
	int taille = 0;
	for (int i = 0; i < triangle_.size(); i++)
    {
	 	 for (int j = 0; j < triangle_[i].size(); j++)
		 {
	 		 taille++;
	 	 }
    }
	int* produit = new int[taille];
	int position = 0;
    for (int i = 0; i < triangle_.size(); i++)
    {
	 	 for (int j = 0; j <= i; j++)
	 	 {
	  		 produit[position] = triangle_[i][j] * t.triangle_[i][j];
			 position++;
	 	 }
    }
	Triangle resultat(triangle_.size(), produit);
    return resultat;
}

/***************************************************************************/
/* Nom: operator*                                                          */
/* Description: Surcharge de l'op�rateur * afin de pouvoir multiplier      */
/*              les valeurs d'un triangles avec une valeur enti�re         */
/* Parametres: a (OUT) : Une valeur enti�re       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque:                                            			       */
/*                     													   */
/***************************************************************************/

Triangle Triangle::operator*( const int& a )
{
	int taille = 0;
	for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j < triangle_[i].size(); j++)
	  	 {
	 		 taille++;
	 	 }
    }
	int* produit = new int[taille];
	int position = 0;
    for (int i = 0; i < triangle_.size(); i++)
   {
	 	 for (int j = 0; j <= i; j++)
	  	 {
	 		 produit[position] = triangle_[i][j] * a;
			 position++;
	 	 }
    }
	Triangle resultat(triangle_.size(), produit);
    return resultat;
}

/***************************************************************************/
/* Nom: operator+=                                                         */
/* Description: Surcharge de l'op�rateur += afin de pouvoir additionner    */
/*              les valeurs de deux triangles ensembles et stocker         */
/*              cette r�ponse dans un de ceux-ci                           */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque: Ici l'utilisation du pointeur this est tr�s utile, puisqu'on
/*           manipule directement la valeur de retour                      */
/***************************************************************************/

Triangle& Triangle::operator+=( Triangle& t )
{
    *this = t + *this;
    return *this;
}

/***************************************************************************/
/* Nom: operator*=                                                         */
/* Description: Surcharge de l'op�rateur *= afin de pouvoir multiplier     */
/*              les valeurs de deux triangles ensembles et stocker         */
/*              cette r�ponse dans un de ceux-ci                           */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque: Ici l'utilisation du pointeur this est tr�s utile, puisqu'on
/*           manipule directement la valeur de retour                      */
/***************************************************************************/

Triangle& Triangle::operator*=( Triangle& t )
{
    *this = t * *this;
    return *this;
}

/***************************************************************************/
/* Nom: operator*=                                                         */
/* Description: Surcharge de l'op�rateur *= afin de pouvoir multiplier     */
/*              les valeurs d'un triangle avec une valeur enti�re et       */
/*               stocker cette r�ponse dans le triangle                    */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque: Ici l'utilisation du pointeur this est tr�s utile, puisqu'on  */
/*           manipule directement la valeur de retour                      */
/*                     													   */
/***************************************************************************/

Triangle& Triangle::operator*=( int a )
{
    *this = *this * a;
    return *this;
}

/***************************************************************************/
/* Nom: operator<                                                          */
/* Description: Surcharge de l'op�rateur < qui v�rifie si le poid du       */
/*est plus petit que celui du triangle pass� en param�tre                  */
/* Parametres: t (OUT) : Triangle constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

bool Triangle::operator<( Triangle& t )
{
    if (poids() < (t.poids()))
		 return true;
    else
		 return false;
}

/***************************************************************************/
/* Nom: operator>                                                          */
/* Description: Surcharge de l'op�rateur > qui v�rifie si le poid du       */
/* est plus grand que celui du triangle pass� en param�tre                 */
/* Parametres: t (OUT) : Triangle constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

bool Triangle::operator>( Triangle& t )
{
    if (poids() > (t.poids()))
	 	 return true;
    else
		 return false;
}

/***************************************************************************/
/* Nom: operator==                                                         */
/* Description: Surcharge de l'op�rateur == qui v�rifie si le poid du      */
/*est �gal � celui du triangle pass� en param�tre                          */
/* Parametres: t (OUT) : Triangle constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

bool Triangle::operator==( Triangle& t )
{
    if (poids() == (t.poids()))
	  	 return true;
    else
	 	 return false;
}

/***************************************************************************/
/* Nom: operator<<                                                         */
/* Description: Puisqu'il n'existe pas de fonction pour afficher un objet  */
/*              triangle, la surcharge de l'op�rateur << �tait n�cessaire  */
/*              afin de r�aliser cette action                              */
/* Parametres: ostr (OUT) : Une r�f�rence vers la librairie iostream       */
/*              t (OUT) : Un objet de type Triangle                        */
/* Valeur de retour: std::ostream&                                         */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

std::ostream& operator<<( std::ostream& ostr, Triangle& t )
{
    string flux = "";
    
    for (int i = 0; i < t.getTaille(); i++)
    {
		 for (int j = 0; j <= i; j++)
		 {
	 		 flux += (to_string(t.triangle_[i][j]) + " ");
	 	 }
   	flux += "\n";
    }
    return ostr << flux << endl;
}

/***************************************************************************/
/* Nom: operator>>                                                         */
/* Description: Puisqu'il n'existe pas de fonction cin pour un objet       */
/*              triangle, la surcharge de l'op�rateur << �tait n�cessaire  */
/*              afin de r�aliser cette action                              */
/* Parametres: is (OUT) : Une r�f�rence vers la librairie iostream         */
/*              t (OUT) : Un objet de type Triangle                        */
/* Valeur de retour: std::istream&                                         */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

std::istream& operator>>( std::istream& is, Triangle& t )
{
    for (int i = 0; i < t.getTaille(); i++)
    {
   		 for (int j = 0; j <= i; j++)
   		 {
			 int a;
			 is >> a;
			 t.triangle_[i][j] = a;
	 	 }
    }
    return is;
}