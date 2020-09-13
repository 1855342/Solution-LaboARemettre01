//But : Écrire un programme qui lit un netier et qui détermine et affiche s'il s'agit d'un entier pair ou d'un entier impair
//Auteur : Charles St-Vincent	
//Date : 13/09/20

#include<iostream>	
using namespace std;
void main()
{
	// Déclaration de la variable
	int reponseOperateur;

	// Message à inviter l'opérateur d'entrée un nombre entier
	cout << "Veuillez entrez un nombre entier. " << endl;
	cout << " Nombre entier : ";
	
	// Le nombre entré par l'opérateur vas être enregistrer dans le programme
	cin >> reponseOperateur;
	cout << endl;
	
	//Le programme divise par 2 le nombre entier 
	
	if (reponseOperateur % 2 == 1)		/* Si le chiffre est impaire ce message ci dessous va être afficher */
	{
		cout << " Le nombre que vous avez entre est impaire" << endl;

	}

	else								/* Si le chiffre est paire ce message ci dessous va être afficher */
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


