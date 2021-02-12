//
// Created by Simon Duchesne on 2021-01-22.
//

#include "AffichageDesMenu_class.h"

void AffichageDesMenu_class::afficherMenuPrincipale() {
    std::cout << "Veuillez entrer le numero associer à l'option de votre choix" << std::endl;
    std::cout << "1) Enregistrer un nouveau joueur" << std::endl;
    std::cout << "2) Afficher tous les joueurs enregistrés" << std::endl;
    std::cout << "3) Enregistrer un nouveau club" << std::endl;
    std::cout << "4) Afficher Tous les club " << std::endl;
    std::cout << "5) " << std::endl;
    std::cout << "6) Afficher tous les entraineurs" << std::endl;
    std::cout << "7) Enregistrer un nouveau stade" << std::endl;
    std::cout << "9) Quitter" << std::endl;
    std::cout << "Veuillez entrer votre choix (ex:3) :";
}

void AffichageDesMenu_class::afficherLancementdeLApp_void() {
    std::cout << "TP1 - Partie Miniprojet - Simon Duchesne - DUCS20069507 - 22 Janvier" << std::endl;
}

void AffichageDesMenu_class::afficherErreurDeSelection_void() {
    std::cout << "Le choix que vous avez fait n'est pas valide." << std::endl;
    std::cout << "Veuillez refaire votre choix" << std::endl;
}

void AffichageDesMenu_class::affichageEnregistrerJoueur_void(int etape) {
    if (etape==1){
        std::cout << "Veuillez entrer le prénom du joueur:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer le nom du joueur:";
    }
    if (etape==3){
        std::cout << "Veuillez entrer le poids du joueur:";
    }
    if (etape==4){
        std::cout << "Veuillez entrer la taille du joueur:";
    }
    if (etape==5){
        std::cout << "Veuillez entrer la ville de naissance du joueur:";
    }
}

void AffichageDesMenu_class::afficherUnJoueur(std::string prenom, std::string nom, float poids, float taille,
                                              std::string villedenaissance) {
    std::cout << std::endl;
    std::cout << prenom << " " << nom << std::endl;
    std::cout << "Taille: " << taille << std::endl;
    std::cout << "Poids: " << poids << std::endl;
    std::cout << "Ville de naissance: " << villedenaissance << std::endl;
}

void AffichageDesMenu_class::affichageCreationDeClub(int etape) {
    if (etape==1){
        std::cout << "Création d'un club en cours"<< std::endl;
        std::cout << "Veuillez entrer le nom du club:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer la couleur du club";
    }
    if (etape==3){
        std::cout << "Veuillez entrer la couleur du club";
    }
    if (etape==4){
        std::cout << "Veuillez faire un résumé de l'histoire du club:";
    }
    if (etape==5){
        std::cout << "Voici la liste des joueurs enregistrer:" << std::endl;
    }
    if (etape==5){
        std::cout << "Voulez-vous créer un nouveau joueur maintenant(celui-ci sera automatiquement join au club)?:" << std::endl;
    }
    if (etape==5){
        std::cout << "Voulez-vous créer un nouveau joueur maintenant(celui-ci sera automatiquement join au club)?(y/n):" << std::endl;
    }
    if (etape==6){
        std::cout << "Voulez-vous créer un autre nouveau joueur?(y/n)";
    }
    if (etape==7){
        std::cout << "Voulez-vous entrer un joueur déjà existant? (y/n)";
    }
    if (etape==8){
        std::cout << "Veuillez entrer le numméro du joueur à ajouter:";
    }
    if (etape==9){
        std::cout << "Le club a été créé.";
    }
}

void AffichageDesMenu_class::affichageCreationEntraineur(int etape) {
    if (etape==1){
        std::cout << "Création d'un entraineur" << std::endl;
        std::cout << "Veuillez entrer le prénom de l'entraineur: ";
    }
    if (etape==2){
        std::cout << "Veuillez entrer le nom de l'entraineur: ";
    }
    if (etape==3){
        std::cout << "Veuillez entrer la ville d'obtention du grade de l'entraineur:";
    }

    if (etape==4){
        std::cout << "Entraineur créé." << std::endl;
    }
}

void AffichageDesMenu_class::affichageDeCreationDunStade(int etape) {

    if (etape==1){
        std::cout << "Création d'un Stade" << std::endl;
        std::cout << "Veuillez entrer le nom du stade:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer l'addresse du stade:";
    }
    if (etape==3){
        std::cout << "Veuillez entrer la capacité maximal du stade(ex:3400):";
    }
    if (etape==4){
        std::cout << "Veuillez indiquer le type du stade" << std::endl;
        std::cout << "Type de stade (ex:tartan)";
    }
}

void AffichageDesMenu_class::afficherNumero(int numero) {
std::cout << "numéro d'enregistrement: " << numero;
}

void AffichageDesMenu_class::afficherUnEntraineur(std::string nom, std::string prenom) {
    std::cout << "Prenom: " << prenom << std::endl;
    std::cout << "Nom: " << nom;
}


