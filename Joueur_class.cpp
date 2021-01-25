//
// Created by Simon Duchesne on 2021-01-21.
//

#include "Joueur_class.h"

#include <utility>

Joueur_class::Joueur_class(std::string prenom, std::string nom, float poids, float taille,
                           std::string villeDeNaissance) {
    this->prenomDuJoueur_sring = std::move(prenom);
    this->nomDuJoueur_string = std::move(nom);
    this->poidsDuJoueur_float = poids;
    this->tailleDuJoueur_float = taille;
    this->villeDeNaissanceDuJoueur_string = std::move(villeDeNaissance);
}
