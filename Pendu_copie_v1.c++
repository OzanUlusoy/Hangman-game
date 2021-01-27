#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>

// on fait une fonction pour eviter les repetitions
int MyFunction(std::string choisi_ton_mot)
{

    int i = 0;        // index pour la boucle qui permet de jouer jusqu'a ce qu'on utilise break
    int faute = 0;    // on a le droit a 8 faute dans le jeu
    char u_recherche; // appuye sur un boutton pour demarrer

    std::string mot_secret(choisi_ton_mot.length(), '-'); // length = longueur du mot, le reste c'est pour le cacher
    while (i < 999)                                       // 99 car on ne sait pas combien de fois on doit repeter la boucle
    {
        std::cout << "JUST POUR VOIR LE NOMBRE DE FAUTE ET I EN COURS ... " << faute << i << std::endl;
        std::cout << "nombre de faute actuel: " << faute << std::endl; //interface de jeu
        std::cout << mot_secret << std::endl;
        std::cout << "ecrire une lettre ici: ";
        std::cin >> u_recherche;

        std::cout << "________________________________________________________" << std::endl;

        for (int i = 0; i < mot_secret.length(); i++) // pour check chaque lettre [i]
        {
            if (choisi_ton_mot[i] == u_recherche) //l'utilisateur a eu juste
            {
                mot_secret[i] = u_recherche; // si ma lettre est juste alors "- = lettre"
                std::cout << "lettre trouver ! " << std::endl;
            }
 }
            if (choisi_ton_mot[i] != u_recherche) //l'utilisateur a eu faux
            {
                std::cout << "rater !" << std::endl;
                faute++;
            }

            // partie fini:
            if (mot_secret == choisi_ton_mot) // parti fini si mot trouver
            {
                std::cout << "ggs";
                break;
            }
            if (faute == 9)
            { //parti fini si y'a eu pendu
                std::cout << "perdu !" << std::endl;
                std::cout << "le mot etait" << choisi_ton_mot << std::endl;
                break;
            }
       
        i++;
    }

    return 0;
}

//----------------------------------------------

int main()
{

    char PressStart{};

    std::cout << "Jeu du pendu" << std::endl;
    std::cout << "Nouvelle Parti:" << std::endl;
    std::cout << "appuyer sur n'importe quelle touche + entrer pour commencer" << std::endl;
    std::cin >> PressStart;

    // on genere un nombre aleatoire et on lance la parti on fonction des cas (case)
    srand((unsigned)time(0));
    printf("Vous etes tombe sur le mot numero: \n ");
    int generer_un_mot = 1 + (rand() % 11);
    printf("%d \n", generer_un_mot);

    switch (generer_un_mot)
    {
    case 1: // qu'est-ce que je veux ? je veux que: une fois qu'une tombe sur une valeur,
        // on affiche "---------" et on remplace chaque "-" par la lettre deviné
        std::cout << "a vous de jouer pour deviner le mot a 4 lettres " << std::endl;
        MyFunction("boxe");
        break;
    case 2:
        printf("a vous de jouer pour deviner le mot a 5 lettres \n");
        MyFunction("essai");
        break;
    case 3:
        printf("a vous de jouer pour deviner le mot a 5 lettres \n");
        MyFunction("bruit");
        break;
    case 4:
        printf("a vous de jouer pour deviner le mot a 6 lettres \n");
        MyFunction("poulpe");
        break;
    case 5:
        printf("a vous de jouer pour deviner le mot a 6 lettres \n");
        MyFunction("quartz");
        break;
    case 6:
        printf("a vous de jouer pour deviner le mot a 7 lettres \n");
        MyFunction("spirale");
        break;
    case 7:
        printf("a vous de jouer pour deviner le mot a 7 lettres \n");
        MyFunction("corbeau");
        break;
    case 8:
        printf("a vous de jouer pour deviner le mot a 8 lettres \n");
        MyFunction("diapason");
        break;
    case 9:
        printf("a vous de jouer pour deviner le mot a 8 lettres \n");
        MyFunction("parcours");
        break;
    case 10:
        printf("a vous de jouer pour deviner le mot a 10 lettres \n");
        MyFunction("aventurier");
        break;
    case 11:
        printf("a vous de jouer pour deviner le mot LE PLUS LONG DU JEU \n");
        MyFunction("qualification");
        break;
    }

    return 0;
}