//
// Created by Simon Duchesne on 2021-01-21.
//

#include "Club_class.h"

#include <utility>

std::string Club_class::gethistoireduclub() {
    return std::string(histoireDuClub_string);
}

std::string Club_class::getcouleurduclub() {
    return std::string(couleurDuClub_string);
}

std::string Club_class::getvilleduclub() {
    return villeDuClub_string;
}


Date_class *Club_class::getptrdatedecreation() {
    return ptrDateDeCreationDuClub;
}

int Club_class::getnombredetitreduclub() {
    return Palmares.size();
}

int Club_class::getnombredejoueurtotalduclub() {
    return Effectif.size();
}

Joueur_class *Club_class::getptrdunjoueurspecifique(int numerodujoueurdanslaliste) {
    return Effectif[numerodujoueurdanslaliste];
}

TitreGagnee *Club_class::getptrduntitrespecifiquedelalisteduclub(int numerodutitredanslaliste) {
    return Palmares[numerodutitredanslaliste];
}

Entraineur_class *Club_class::getentraineurduclub() {
    return ptrEntraineurDeLequipe;
}

void Club_class::ajouterUnTitre(TitreGagnee *ptrtitreaajouter) {
    Palmares.push_back(ptrtitreaajouter);
}

void Club_class::ajouterJoueurALaListe(Joueur_class *ptrjoueuraajouterauclub) {
    Effectif.push_back(ptrjoueuraajouterauclub);
}

Club_class::Club_class(std::string nomduclub, std::string histoire, std::string couleur, std::string ville,
                       Date_class *ptrdatecreation, Stade_class *ptrstade, Entraineur_class *ptrentraineur){
    this->nomduclub_string = nomduclub;
this->histoireDuClub_string = std::move(histoire);
this->couleurDuClub_string = std::move(couleur);
this->villeDuClub_string = std::move(ville);
this->ptrDateDeCreationDuClub = ptrdatecreation;
this->ptrDuStadeDuClub = ptrstade;
this->ptrEntraineurDeLequipe = ptrentraineur;
}

std::string Club_class::getnomduclub() {
    return std::string();
}
