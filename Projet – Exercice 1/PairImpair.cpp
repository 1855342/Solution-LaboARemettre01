//But : �crire un programme qui lit un netier et qui d�termine et affiche s'il s'agit d'un entier pair ou d'un entier impair
//Auteur : Charles St-Vincent	
//Date : 13/09/20

#include<iostream>	
using namespace std;
void main()
{
	// D�claration de la variable
	int reponseOperateur;

	// Message � inviter l'op�rateur d'entr�e un nombre entier
	cout << "Veuillez entrez un nombre entier. " << endl;
	cout << " Nombre entier : ";
	
	// Le nombre entr� par l'op�rateur vas �tre enregistrer dans le programme
	cin >> reponseOperateur;
	cout << endl;
	
	//Le programme divise par 2 le nombre entier 
	
	if (reponseOperateur % 2 == 1)		/* Si le chiffre est impaire ce message ci dessous va �tre afficher */
	{
		cout << " Le nombre que vous avez entre est impaire" << endl;

	}

	else								/* Si le chiffre est paire ce message ci dessous va �tre afficher */
	{
		cout << "le nombre que vous avez entre est pair" << endl;
	}

}




//Plan de test
/*
Nombre entre			pair ou impaire

5						impaire
4						pair
88						pair	
25						impaire

*/


