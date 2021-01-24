//
// Created by Simon Duchesne on 2021-01-22.
//

#include "AffichageDesMenu_class.h"

void AffichageDesMenu_class::afficherMenuPrincipale() {
    std::cout << "Veuillez entrer le numero associer à l'option de votre choix" << std::endl;
    std::cout << "1) en construction" << std::endl;
    std::cout << "2) en construction" << std::endl;
    std::cout << "3) en construction" << std::endl;
    std::cout << "4) en construction" << std::endl;
    std::cout << "5) en construction" << std::endl;
    std::cout << "6) en construction" << std::endl;
    std::cout << "7) en construction" << std::endl;
    std::cout << "Veuillez entrer votre choix:";
}

void AffichageDesMenu_class::afficherLancementdeLApp_void() {
    std::cout << "TP1 - Partie Miniprojet - Simon Duchesne - DUCS20069507 - 22 Janvier" << std::endl;
}

void AffichageDesMenu_class::afficherErreurDeSelection_void() {
    std::cout << "Le choix que vous avez fait n'est pas valide." << std::endl;
    std::cout << "Veuillez refaire votre choix" << std::endl;
}
