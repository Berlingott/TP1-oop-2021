//
// Created by Simon Duchesne on 2021-02-11.
//

#include "TitreGagnee.h"

#include <utility>

std::string TitreGagnee::getNomDuTitre() {
    return std::string(nomDuTitre);
}

Date_class *TitreGagnee::getptrDateDObtention() {
    return ptrDateDObtention;
}

TitreGagnee::TitreGagnee(Date_class *ptrdateobtention, std::string nomdutit) {
    this->ptrDateDObtention = ptrdateobtention;
    this->nomDuTitre = std::move(nomdutit);
}

