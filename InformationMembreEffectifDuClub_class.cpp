//
// Created by Simon Duchesne on 2021-01-26.
//

#include "InformationMembreEffectifDuClub_class.h"

Joueur_class *InformationMembreEffectifDuClub_class::get_ptrJoueurMembre() {
    return nullptr;
}

InformationMembreEffectifDuClub_class *
InformationMembreEffectifDuClub_class::get_ptr_suivant_informationMembreEffectifDuClubClass() {
    return nullptr;
}

InformationMembreEffectifDuClub_class *
InformationMembreEffectifDuClub_class::get_ptr_precedent_informationMembreEffectifDuClubClass() {
    return nullptr;
}

void InformationMembreEffectifDuClub_class::set_ptrJoueurMembre(Joueur_class *ptrjoueurclass) {
    ptrjoueurMembre=ptrjoueurclass;
}

void InformationMembreEffectifDuClub_class::set_ptr_suivant_informationMembreEffectifDuClubClass(
        InformationMembreEffectifDuClub_class *ptrInformationMembreEffectif) {
ptr_suivant_informationMembreEffectifDuClubClass=ptrInformationMembreEffectif;
}

void InformationMembreEffectifDuClub_class::set_ptr_precedent_informationMembreEffectifDuClubClass(
        InformationMembreEffectifDuClub_class *ptrInformationMembreEffectif) {
ptr_precedent_informationMembreEffectifDuClubClass = ptrInformationMembreEffectif;
}

InformationMembreEffectifDuClub_class::InformationMembreEffectifDuClub_class(Joueur_class *ptrJoueurMembre) {
this->ptrjoueurMembre = ptrJoueurMembre;
this->ptr_precedent_informationMembreEffectifDuClubClass = nullptr;
this->ptr_suivant_informationMembreEffectifDuClubClass = nullptr;
}

InformationMembreEffectifDuClub_class::InformationMembreEffectifDuClub_class(Joueur_class *ptrJoueurMembre,
                                                                             InformationMembreEffectifDuClub_class *ptr_precedent_informationMembreEffectifDuClubClass) {
this->ptr_precedent_informationMembreEffectifDuClubClass = ptr_precedent_informationMembreEffectifDuClubClass;
this->ptrjoueurMembre = ptrJoueurMembre;

}
