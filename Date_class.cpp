//
// Created by Simon Duchesne on 2021-02-11.
//

#include "Date_class.h"

int Date_class::getJour() {
    return jour;
}

int Date_class::getMois() {
    return mois;
}

int Date_class::getAnnee() {
    return annee;
}

Date_class::Date_class(int jour, int mois, int annee) {
this->jour = jour;
this->mois = mois;
this->annee = annee;
}
