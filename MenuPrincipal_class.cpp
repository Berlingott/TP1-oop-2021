//
// Created by Simon Duchesne on 2021-01-21.
//

#include "MenuPrincipal_class.h"
#include <iostream>

void MenuPrincipal_class::afficherLeMenu_function() {
    std::cout << "Veuillez entrer le numero associer à l'option de votre choix";
    std::cout << "1) en construction";
    std::cout << "2) en construction";
    std::cout << "3) en construction";
    std::cout << "4) en construction";
    std::cout << "5) en construction";
    std::cout << "6) en construction";
    std::cout << "7) en construction";
}

void MenuPrincipal_class::afficherMessageDErreurErronne_function() {
    std::cout << "Votre choix n'est pas valide.";
    std::cout << "Veuillez refaire votre sélection.";
    afficherLeMenu_function();
}

void MenuPrincipal_class::afficherInitialisation() {
    std::cout << "Simon Duchesne - TP1 O.O.P. - 10 Fevrier 2021"<< std::endl;
    std::cout << std::endl;
    afficherLeMenu_function();
}
