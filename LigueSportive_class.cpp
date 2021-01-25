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
