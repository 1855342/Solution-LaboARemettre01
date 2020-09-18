//But : Afficher un nombre à 5 et séparer verticalement les 5 chiffres
//Auteur : Charles St-Vincent
//Date : 13/09/20

#include <iostream>
using namespace std;
void main()
{
 // Déclaration de la variable
    int nombre5Chiffres;
    
 //   Message invitant l'opérateur d'entree un nombre entier de 5 chiffres
    cout << "Veuillez entrer un nombre entier de 5 chiffres. " << endl;
    cout << "Nombre : ";
    
 // Le nombre va être enregistré dans le programme 
    cin >> nombre5Chiffres;
   
 // Le programme s'assure qu'il sagit d'un nombre à 5 chiffres. Si le nombre ne contient pas 5 chiffres il va le redemander et enlever les anciens essaies. 
 // KM : Attention d'utiliser juste les notions vues en classe
    while (nombre5Chiffres < 9999 || nombre5Chiffres > 99999)
    {
        
        system("CLS");
        cout << "Le nombre que vous avez entrer ne contient pas 5 chiffres. " << endl;
        cout << "Nombre : ";
        cin >> nombre5Chiffres;
    }

    // Le programme sépare chacun des chiffres et recommence une ligne à chaque chiffre.
 // KM : Il faut expliquer le raisonnement du calcul
    cout << nombre5Chiffres % 100000 / 10000 << endl;
    cout << nombre5Chiffres % 10000 / 1000 << endl;
    cout << nombre5Chiffres % 1000 / 100 << endl;
    cout << nombre5Chiffres % 100 / 10 << endl;
    cout << nombre5Chiffres % 10 << endl;
}


//Plan de test
/*
nombre à 5 chiffres             Résultat
45623                           4
                                5
                                6
                                2
                                3

7526                            Le programme demande de reentrée le nombre
                                


85236                           8
                                5
                                2
                                3
                                6
*/
