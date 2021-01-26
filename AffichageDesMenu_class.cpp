//
// Created by Simon Duchesne on 2021-01-22.
//

#include "AffichageDesMenu_class.h"

void AffichageDesMenu_class::afficherMenuPrincipale() {
    std::cout << "Veuillez entrer le numero associer à l'option de votre choix" << std::endl;
    std::cout << "1) Enregistrer un nouveau joueur" << std::endl;
    std::cout << "2) Afficher tous les joueurs enregistrés" << std::endl;
    std::cout << "3) en construction" << std::endl;
    std::cout << "4) en construction" << std::endl;
    std::cout << "5) en construction" << std::endl;
    std::cout << "6) en construction" << std::endl;
    std::cout << "7) en construction" << std::endl;//todo quitter
    std::cout << "Veuillez entrer votre choix:";
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
    std::cout << "Taille:" << taille << std::endl;
    std::cout << "Poids:" << poids << std::endl;
    std::cout << "Ville de naissance: " << villedenaissance << std::endl;
}

