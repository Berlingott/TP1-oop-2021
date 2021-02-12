//
// Created by Simon Duchesne on 2021-01-21.
//

#ifndef TP1_POO_2021_ENTRAINEUR_CLASS_H
#include <string>
#include "TitreGagnee.h"
#include <vector>
#define TP1_POO_2021_ENTRAINEUR_CLASS_H


class Entraineur_class {
private:
    std::string nomEntraineur, prenomEntraineur, lieuObtentionDuGrade;

protected:
public:
    std::string getNomEntraineur();
    std::string getPrenomEntraineur();
    std::string getLieuObtentionDuGrade();
    std::vector<TitreGagnee*> Palmares;
    Entraineur_class(std::string prenomentraineur, std::string nomentraineur, std::string lieudugrade);


};


#endif //TP1_POO_2021_ENTRAINEUR_CLASS_H
