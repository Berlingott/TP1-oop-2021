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
    while (!quitter) {
        affichageDesMenuClass->afficherMenuPrincipale();
        std::cin >> choixDuMenuPrincipale_int;
        verificationDuChoix_int();
    }
    return 0;
}

int LogigueMenu_class::verificationDuChoix_int() {
    switch (choixDuMenuPrincipale_int) {
        case 1:
            enregistrerUnNouveauJoueur();
            break;
        case 2:
            afficherTousLesJoueur();
            break;
        case 3:
            enregistrerUnNouveauClub();
            break;
        case 9:
            quitter = true;
            break;
        default: choixNonReconnue_void();
    }
    return 0;
}

void LogigueMenu_class::choixNonReconnue_void() {
    affichageDesMenuClass->afficherErreurDeSelection_void();
    choixDuMenu();
}

void LogigueMenu_class::enregistrerUnNouveauJoueur() {
    int etape=1;
    std::string nomDuJoueur, prenomDuJoueur, villeDeNaissanceDuJoueur;
    float poidsDuJoueur, tailleDuJoueur;

    affichageDesMenuClass->affichageEnregistrerJoueur_void(etape);
    std::cin >> prenomDuJoueur ;
    etape++;
    affichageDesMenuClass->affichageEnregistrerJoueur_void(etape);
    std::cin >> nomDuJoueur;
    etape++;
    affichageDesMenuClass->affichageEnregistrerJoueur_void(etape);
    std::cin >> poidsDuJoueur ;
    etape++;
    affichageDesMenuClass->affichageEnregistrerJoueur_void(etape);
    std::cin >> tailleDuJoueur;
    etape++;
    affichageDesMenuClass->affichageEnregistrerJoueur_void(etape);
    std::cin >> villeDeNaissanceDuJoueur;

    Joueur_class* ptrjoueurClass= new Joueur_class(prenomDuJoueur,nomDuJoueur,poidsDuJoueur,tailleDuJoueur,villeDeNaissanceDuJoueur);
    ligueSportiveClass->ajouterUnJoueurAuRpertoire(ptrjoueurClass);
}

void LogigueMenu_class::afficherTousLesJoueur() {
    Joueur_class* ptrpresentjoueurclass;
    for (int i = ligueSportiveClass->getGrandeurDuRepertoireDesJoueurs()-1; i>=0 ; i--) {
        ptrpresentjoueurclass = ligueSportiveClass->getPtrJoueurDuRegistre(i);
        affichageDesMenuClass->afficherUnJoueur(ptrpresentjoueurclass->getprenomDuJoueur(), ptrpresentjoueurclass->getnomDuJoueur(), ptrpresentjoueurclass->getpoidsDuJoeur(), ptrpresentjoueurclass->gettailleDuJoueur(), ptrpresentjoueurclass->getvilleDeNaissanceDuJoueur());
    }
}

void LogigueMenu_class::enregistrerUnNouveauClub() {
    char reponse;
    int etape=1, grandeurDeLaListeDesJoueurs;
    Joueur_class* joueurManipuleClass = nullptr;
    InformationMembreEffectifDuClub_class* ptrteteInformationmembreeffectif = nullptr;
    InformationMembreEffectifDuClub_class* ptrmanipulee_Informationmembreeffectif = nullptr;
    InformationMembreEffectifDuClub_class* ptrsuivant_Informationmembreeffectif = nullptr;
    InformationMembreEffectifDuClub_class* ptrprecedent_Informationmembreeffectif = nullptr;
    std::string nomDuCLub, couleurDuClub,histoireDuClub;

    affichageDesMenuClass->affichageCreationDeClub(etape);
    etape++;//creation d'iun club
    affichageDesMenuClass->affichageCreationDeClub(etape);
    etape++;// veuillez entrer le nom
    std::cin >> nomDuCLub;
    affichageDesMenuClass->affichageCreationDeClub(etape);
    std::cin >> couleurDuClub;
    etape++;
    affichageDesMenuClass->affichageCreationDeClub(etape);
    etape++;
    std::cin >> histoireDuClub;
    affichageDesMenuClass->affichageCreationDeClub(etape);
    afficherTousLesJoueur();
    std::cin >> reponse;
    etape++;
    while (reponse=='y'){
        enregistrerUnNouveauJoueur();
        if (ptrteteInformationmembreeffectif == nullptr){
            ptrteteInformationmembreeffectif = new InformationMembreEffectifDuClub_class(ligueSportiveClass->getPtrJoueurDuRegistre(ligueSportiveClass->getGrandeurDuRepertoireDesJoueurs()));
        } else{
            ptrmanipulee_Informationmembreeffectif = ptrteteInformationmembreeffectif->get_ptr_suivant_informationMembreEffectifDuClubClass();
            ptrprecedent_Informationmembreeffectif = nullptr;
            ptrsuivant_Informationmembreeffectif = ptrmanipulee_Informationmembreeffectif->get_ptr_suivant_informationMembreEffectifDuClubClass();

            while (ptrsuivant_Informationmembreeffectif != nullptr){
                ptrprecedent_Informationmembreeffectif=ptrmanipulee_Informationmembreeffectif;
                ptrmanipulee_Informationmembreeffectif=ptrsuivant_Informationmembreeffectif;
                ptrsuivant_Informationmembreeffectif=ptrsuivant_Informationmembreeffectif->get_ptr_suivant_informationMembreEffectifDuClubClass();
            }
            ptrsuivant_Informationmembreeffectif = new InformationMembreEffectifDuClub_class(ligueSportiveClass->getPtrJoueurDuRegistre(ligueSportiveClass->getGrandeurDuRepertoireDesJoueurs()),ptrprecedent_Informationmembreeffectif);
            ptrmanipulee_Informationmembreeffectif->set_ptr_suivant_informationMembreEffectifDuClubClass(ptrsuivant_Informationmembreeffectif);
            ptrprecedent_Informationmembreeffectif->set_ptr_suivant_informationMembreEffectifDuClubClass(ptrmanipulee_Informationmembreeffectif);
        }
        affichageDesMenuClass->affichageCreationDeClub(etape);
        std::cin >> reponse;
    }
    etape++;
    reponse='y';
    affichageDesMenuClass->affichageCreationDeClub(etape);
    std::cin >> reponse;
    etape++;
    while (reponse='y'){
        int selectiondujoueur;
        afficherTousLesJoueur();





        affichageDesMenuClass->affichageCreationDeClub(etape);
        std::cin >> reponse;
    }
    etape++;

}

void LogigueMenu_class::ajouterJoueurAuClub() {

}

