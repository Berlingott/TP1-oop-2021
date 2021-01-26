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

