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

void LigueSportive_class::supprimerUnClubDuRegistre(int positionDansregistre) {
    repertoireClub_vector.erase (repertoireClub_vector.begin()+positionDansregistre);
}

LigueSportive_class::~LigueSportive_class() {
    int size;
    //std::vector<Joueur_class*> repertoireJoeur_vector;
   // std::vector<Club_class*> repertoireClub_vector;
  //  std::vector<Entraineur_class*> repertoireEntraineur_vector;
  //  std::vector<Stade_class*> repertoireStade_vector;

    Joueur_class* ptrjoueur;
    Club_class* ptrclub;
    Entraineur_class* ptrentraineur;
    Stade_class* ptrstade;

    size = repertoireClub_vector.size();
    for (int i = 0; i < size; ++i) {
        ptrclub = repertoireClub_vector[0];
        delete ptrclub;
        repertoireClub_vector.erase(repertoireClub_vector.begin());
    }
    size = repertoireJoeur_vector.size();
    for (int i = 0; i < size; ++i) {
        ptrjoueur = repertoireJoeur_vector[0];
        delete ptrjoueur;
        repertoireJoeur_vector.erase(repertoireJoeur_vector.begin());
    }
    size = repertoireEntraineur_vector.size();
    for (int i = 0; i < size; ++i) {
        ptrentraineur= repertoireEntraineur_vector[0];
        delete ptrentraineur;
        repertoireEntraineur_vector.erase(repertoireEntraineur_vector.begin());
    }
    size = repertoireStade_vector.size();
    for (int i = 0; i < size; ++i) {
        ptrstade = repertoireStade_vector[0];
        delete ptrstade;
        repertoireStade_vector.erase(repertoireStade_vector.begin());
    }
}


