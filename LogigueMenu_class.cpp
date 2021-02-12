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
        case 5:
            ajouterUnNouvelEntraineur();
            break;
        case 7:
            ajouterUnNouveauStade();
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
    for (int i =0; i<ligueSportiveClass->getGrandeurDuRepertoireDesJoueurs() ; i++) {
        affichageDesMenuClass->afficherNumero(i+1);
        ptrpresentjoueurclass = ligueSportiveClass->getPtrJoueurDuRegistre(i);
        affichageDesMenuClass->afficherUnJoueur(ptrpresentjoueurclass->getprenomDuJoueur(), ptrpresentjoueurclass->getnomDuJoueur(), ptrpresentjoueurclass->getpoidsDuJoeur(), ptrpresentjoueurclass->gettailleDuJoueur(), ptrpresentjoueurclass->getvilleDeNaissanceDuJoueur());
    }
}

void LogigueMenu_class::enregistrerUnNouveauClub() {//todo la creation de club
    int etape=1, jour, mois, annee, nombredejoueur, nombredetitre, choixpourvecteur;
    Club_class* ptrclubenconstruction = nullptr;
    Date_class* ptrdatedecreationduclubenconstruction = nullptr;
    Entraineur_class* ptrentraineurduclubencreation = nullptr;
    TitreGagnee* ptrtitrepourclubencreation = nullptr;
    std::string nom, couleur, ville, addresse;
    Stade_class* ptrstadeduclubencreation;

    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> nom;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> couleur;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> ville;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> addresse;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> nom;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> annee;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> mois;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> jour;
    etape++;

    ptrdatedecreationduclubenconstruction = new Date_class(jour, mois, annee);

    afficherTousLesEntraineur();
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    etape++;
    std::cin >> choixpourvecteur;
    choixpourvecteur--;
    ptrentraineurduclubencreation = ligueSportiveClass.getPtrEntraineurDuRegistre(choixpourvecteur);

    afficherTousLesStade();
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    etape++;
    std::cin >> choixpourvecteur;
    ptrstadeduclubencreation = ligueSportiveClass.getStadeDuRegistre(choixpourvecteur);







    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> jour;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> jour;
    etape++;
    AffichageDesMenu_class::affichageCreationDeClub(etape);
    std::cin >> jour;
    etape++;




}

void LogigueMenu_class::ajouterJoueurAuClub() {

}

void LogigueMenu_class::ajouterUnNouvelEntraineur() {
    std::string prenomEntraineur, nomEntraineur, lieuObtentionDuGrade;
    Entraineur_class* nouvelEntraineur;
    int etape = 1;

    affichageDesMenuClass->affichageCreationEntraineur(etape);
    etape++;
    std::cin >> prenomEntraineur;
    affichageDesMenuClass->affichageCreationEntraineur(etape);
    etape++;
    std::cin >> nomEntraineur;
    affichageDesMenuClass->affichageCreationEntraineur(etape);
    etape++;
    std::cin >> lieuObtentionDuGrade;

    nouvelEntraineur = new Entraineur_class(prenomEntraineur, nomEntraineur, lieuObtentionDuGrade);

    ligueSportiveClass->ajouterUnEntraineurAuRpertoire(nouvelEntraineur);

    //todo ajouter l'entraineur
    affichageDesMenuClass->affichageCreationEntraineur(etape);
}

void LogigueMenu_class::ajouterUnNouveauStade() {
    Stade_class* ptrNouveauStade;
    int capacitemax, etape=1;
    std::string adressedustade, nomdustade, typedeterrain;


    affichageDesMenuClass->affichageDeCreationDunStade(etape);
    etape++;
    std::cin >> nomdustade;

    affichageDesMenuClass->affichageDeCreationDunStade(etape);
    etape++;
    std::cin >> adressedustade;

    affichageDesMenuClass->affichageDeCreationDunStade(etape);
    etape++;
    std::cin >> capacitemax;

    affichageDesMenuClass->affichageDeCreationDunStade(etape);
    etape++;
    std::cin >> typedeterrain;

    ptrNouveauStade = new Stade_class(nomdustade, adressedustade, capacitemax,typedeterrain);
    ligueSportiveClass->ajouterUnStadeAuRpertoire(ptrNouveauStade);
}

void LogigueMenu_class::afficherTousLesEntraineur() {
    Entraineur_class* ptrpresententraineur;
    for (int i =0; i<ligueSportiveClass->getGrandeurDuRepertoireDesEntraineur() ; i++) {
        affichageDesMenuClass->afficherNumero(i+1);
        ptrpresententraineur = ligueSportiveClass->getPtrEntraineurDuRegistre(i);
        affichageDesMenuClass->afficherUnEntraineur(ptrpresententraineur->getNomEntraineur(), ptrpresententraineur->getPrenomEntraineur());
    }
}

