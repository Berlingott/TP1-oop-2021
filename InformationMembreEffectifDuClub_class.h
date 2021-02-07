//
// Created by Simon Duchesne on 2021-01-26.
//

#ifndef TP1_POO_2021_INFORMATIONMEMBREEFFECTIFDUCLUB_CLASS_H
#define TP1_POO_2021_INFORMATIONMEMBREEFFECTIFDUCLUB_CLASS_H
#include "Joueur_class.h"

class InformationMembreEffectifDuClub_class {
private:
    Joueur_class* ptrjoueurMembre;
    InformationMembreEffectifDuClub_class* ptr_suivant_informationMembreEffectifDuClubClass;
    InformationMembreEffectifDuClub_class* ptr_precedent_informationMembreEffectifDuClubClass;
public:
    Joueur_class* get_ptrJoueurMembre();
    InformationMembreEffectifDuClub_class* get_ptr_suivant_informationMembreEffectifDuClubClass();
    InformationMembreEffectifDuClub_class* get_ptr_precedent_informationMembreEffectifDuClubClass();
    void set_ptrJoueurMembre(Joueur_class* ptrjoueurclass);
    void set_ptr_suivant_informationMembreEffectifDuClubClass(InformationMembreEffectifDuClub_class* ptrInformationMembreEffectif);
    void set_ptr_precedent_informationMembreEffectifDuClubClass(InformationMembreEffectifDuClub_class* ptrInformationMembreEffectif);
    InformationMembreEffectifDuClub_class(Joueur_class* ptrJoueurMembre);
    InformationMembreEffectifDuClub_class(Joueur_class* ptrJoueurMembre, InformationMembreEffectifDuClub_class* ptr_precedent_informationMembreEffectifDuClubClass);

};


#endif //TP1_POO_2021_INFORMATIONMEMBREEFFECTIFDUCLUB_CLASS_H
