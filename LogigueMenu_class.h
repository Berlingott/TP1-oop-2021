//
// Created by Simon Duchesne on 2021-01-22.
//

#ifndef TP1_POO_2021_LOGIGUEMENU_CLASS_H
#include "AffichageDesMenu_class.h"
#include "LigueSportive_class.h"
#include <iostream>
#define TP1_POO_2021_LOGIGUEMENU_CLASS_H


class LogigueMenu_class {
private:
    AffichageDesMenu_class* affichageDesMenuClass;
    LigueSportive_class* ligueSportiveClass;
    int choixDuMenuPrincipale_int;
private:
public:
    LogigueMenu_class();
    void lancementDeLApplication_void();
    int choixDuMenu();
    int verificationDuChoix_int();
    void choixNonReconnue_void();
};


#endif //TP1_POO_2021_LOGIGUEMENU_CLASS_H
