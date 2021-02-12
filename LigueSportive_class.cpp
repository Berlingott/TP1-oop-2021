//
// Created by Simon Duchesne on 2021-01-21.
//

#include "LigueSportive_class.h"

void LigueSportive_class::ajouterUnJoueurAuRpertoire(Joueur_class *ptrjoueurclass) {
repertoireJoeur_vector.push_back(ptrjoueurclass);
}

int LigueSportive_class::getGrandeurDuRepertoireDesJoueurs() {
    return repertoireJoeur_vector.size();
}

int LigueSportive_class::getGrandeurDuRepertoireDesClubs() {
    return repertoireClub_vector.size();
}

int LigueSportive_class::getGrandeurDuRepertoireDesStade() {
    return repertoireStade_vector.size();
}

int LigueSportive_class::getGrandeurDuRepertoireDesEntraineur() {
    return repertoireEntraineur_vector.size();
}

Joueur_class *LigueSportive_class::getPtrJoueurDuRegistre(int positionDansVecteur) {
    return repertoireJoeur_vector[positionDansVecteur];
}

void LigueSportive_class::ajouterUnEntraineurAuRpertoire(Entraineur_class *ptrentraineurclass) {
repertoireEntraineur_vector.push_back(ptrentraineurclass);
}

void LigueSportive_class::ajouterUnStadeAuRpertoire(Stade_class *ptrstadeclass) {
    repertoireStade_vector.push_back(ptrstadeclass);
}

Entraineur_class *LigueSportive_class::getPtrEntraineurDuRegistre(int positionDansVecteur) {
    return repertoireEntraineur_vector[positionDansVecteur];
}

Club_class *LigueSportive_class::getPtrClubDuRegistre(int positionDansVecteur) {
    return repertoireClub_vector[positionDansVecteur];
}

Stade_class *LigueSportive_class::getPtrStadeDuRegistre(int positionDansVecteur) {
    return repertoireStade_vector[positionDansVecteur];
}

void LigueSportive_class::ajouterUnClubAuRpertoire(Club_class *ptrclubclass) {
    repertoireClub_vector.push_back(ptrclubclass);
}


