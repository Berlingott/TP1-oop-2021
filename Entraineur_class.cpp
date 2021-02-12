//
// Created by Simon Duchesne on 2021-01-21.
//

#include "Entraineur_class.h"

#include <utility>

std::string Entraineur_class::getNomEntraineur() {
    return nomEntraineur;
}

std::string Entraineur_class::getPrenomEntraineur() {
    return prenomEntraineur;
}

std::string Entraineur_class::getLieuObtentionDuGrade() {
    return lieuObtentionDuGrade;
}

Entraineur_class::Entraineur_class(std::string prenomentraineur, std::string nomentraineur, std::string lieudugrade) {
    this->prenomEntraineur = std::move(prenomentraineur);
    this->nomEntraineur = std::move(nomentraineur);
    this->lieuObtentionDuGrade = std::move(lieudugrade);
}

void Entraineur_class::ajouterUnTitre(TitreGagnee *ptrtitre) {
    Palmares.push_back(ptrtitre);
}

int Entraineur_class::getNombreDeTitreDeLentraineur() {
    return Palmares.size();
}

Entraineur_class::~Entraineur_class() {
    TitreGagnee* ptrtitre;
    int size;

    size = Palmares.size();
    for (int i = 0; i < size; ++i) {
        ptrtitre = Palmares[0];
        delete ptrtitre;
        Palmares.erase(Palmares.begin());
    }
}
