//
// Created by Simon Duchesne on 2021-01-21.
//

#include "Stade_class.h"

#include <utility>

int Stade_class::getcapaciteMax() {
    return capaciteMax_int;
}

std::string Stade_class::getnomDuStade() {
    return std::string(nomDuStade_string);
}

std::string Stade_class::getadresseDuStade() {
    return std::string(adresseDuStade_string);
}


Stade_class::Stade_class(std::string nomdustade, std::string addressedustade, int capacitemax,
                         std::string typedeceterrain) {
this->nomDuStade_string = std::move(nomdustade);
this->adresseDuStade_string = std::move(addressedustade);
this->capaciteMax_int = capacitemax;
this->typeDeCeTerrain = std::move(typedeceterrain);


}

