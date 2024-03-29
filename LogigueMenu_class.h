//
// Created by Simon Duchesne on 2021-01-22.
//

#ifndef TP1_POO_2021_LOGIGUEMENU_CLASS_H
#define TP1_POO_2021_LOGIGUEMENU_CLASS_H
#include "AffichageDesMenu_class.h"
#include "LigueSportive_class.h"
#include "Joueur_class.h"
#include <iostream>
#include "Stade_class.h"
#include "TitreGagnee.h"

class LogigueMenu_class {
private:
    AffichageDesMenu_class* affichageDesMenuClass;
    LigueSportive_class* ligueSportiveClass;
    int choixDuMenuPrincipale_int;
    bool quitter = false;

private:
public:
    LogigueMenu_class();
    void lancementDeLApplication_void();
    int choixDuMenu();
    int verificationDuChoix_int();
    void choixNonReconnue_void();
    void enregistrerUnNouveauJoueur();
    void afficherTousLesJoueur();
    void enregistrerUnNouveauClub();
    void ajouterJoueurAuClub();
    void ajouterUnNouvelEntraineur();
    void ajouterUnNouveauStade();
    void afficherTousLesEntraineur();
    void afficherTousLesStades();
    TitreGagnee* creationDunTitre();
    void afficherLesJoueursDunClub();
    void afficherSeulementNomtousLesClub();
    void afficherLesPlusTitree();
    void supprimerUnClub();
    ~LogigueMenu_class();
};


#endif //TP1_POO_2021_LOGIGUEMENU_CLASS_H
