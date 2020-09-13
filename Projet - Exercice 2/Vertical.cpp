//But : Afficher un nombre � 5 et s�parer verticalement les 5 chiffres
//Auteur : Charles St-Vincent
//Date : 13/09/20

#include <iostream>
using namespace std;
void main()
{
 // D�claration de la variable
    int nombre5Chiffres;
    
 //   Message invitant l'op�rateur d'entree un nombre entier de 5 chiffres
    cout << "Veuillez entrer un nombre entier de 5 chiffres. " << endl;
    cout << "Nombre : ";
    
 // Le nombre va �tre enregistr� dans le programme 
    cin >> nombre5Chiffres;
   
 // Le programme s'assure qu'il sagit d'un nombre � 5 chiffres. Si le nombre ne contient pas 5 chiffres il va le redemander et enlever les anciens essaies. 
    while (nombre5Chiffres < 9999 || nombre5Chiffres > 99999)
    {
        
        system("CLS");
        cout << "Le nombre que vous avez entrer ne contient pas 5 chiffres. " << endl;
        cout << "Nombre : ";
        cin >> nombre5Chiffres;
    }

    // Le programme s�pare chacun des chiffres et recommence une ligne � chaque chiffre.
    cout << nombre5Chiffres % 100000 / 10000 << endl;
    cout << nombre5Chiffres % 10000 / 1000 << endl;
    cout << nombre5Chiffres % 1000 / 100 << endl;
    cout << nombre5Chiffres % 100 / 10 << endl;
    cout << nombre5Chiffres % 10 << endl;
}


//Plan de test
/*
nombre � 5 chiffres             R�sultat
45623                           4
                                5
                                6
                                2
                                3

7526                            Le programme demande de reentr�e le nombre
                                


85236                           8
                                5
                                2
                                3
                                6
*/