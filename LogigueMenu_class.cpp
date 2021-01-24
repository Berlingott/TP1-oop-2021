//
// Created by Simon Duchesne on 2021-01-22.
//

#include "LogigueMenu_class.h"

LogigueMenu_class::LogigueMenu_class() {
affichageDesMenuClass = new AffichageDesMenu_class;
ligueSportiveClass = new LigueSportive_class;
}

void LogigueMenu_class::lancementDeLApplication_void() {
    affichageDesMenuClass->afficherLancementdeLApp_void();
    this->choixDuMenu();
}

int LogigueMenu_class::choixDuMenu() {
    affichageDesMenuClass->afficherMenuPrincipale();
    std::cin >> choixDuMenuPrincipale_int;
    verificationDuChoix_int();
    return 0;
}

int LogigueMenu_class::verificationDuChoix_int() {
    switch (choixDuMenuPrincipale_int) {

        default: choixNonReconnue_void();
    }
    return 0;
}

void LogigueMenu_class::choixNonReconnue_void() {
    affichageDesMenuClass->afficherErreurDeSelection_void();
    choixDuMenu();
}

