//
// Created by Simon Duchesne on 2021-01-22.
//

#ifndef TP1_POO_2021_LOGIGUEMENU_CLASS_H
#include "AffichageDesMenu_class.h"
#define TP1_POO_2021_LOGIGUEMENU_CLASS_H


class LogigueMenu_class {
private:
    AffichageDesMenu_class* affichageDesMenuClass;
    int choixDuMenuPrincipale_int;
private:
public:
    LogigueMenu_class();
    lancementDeLApplication_void();
};


#endif //TP1_POO_2021_LOGIGUEMENU_CLASS_H
