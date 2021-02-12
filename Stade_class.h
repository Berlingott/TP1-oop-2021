//
// Created by Simon Duchesne on 2021-01-21.
//

#ifndef TP1_POO_2021_STADE_CLASS_H
#include <string>
#define TP1_POO_2021_STADE_CLASS_H


class Stade_class {
private:
    std::string typeDeCeTerrain;
    int capaciteMax_int;
    std::string nomDuStade_string, adresseDuStade_string;


protected:
public:
    int getcapaciteMax();
    std::string getnomDuStade();
    std::string getadresseDuStade();



    Stade_class(std::string nomdustade, std::string addressedustade, int capacitemax, std::string typedeceterrain );
};


#endif //TP1_POO_2021_STADE_CLASS_H
