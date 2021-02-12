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
    std::vector<TitreGagnee*>Palmares;
protected:
public:
    std::string getNomEntraineur();
    std::string getPrenomEntraineur();
    std::string getLieuObtentionDuGrade();
    int getNombreDeTitreDeLentraineur();
    Entraineur_class(std::string prenomentraineur, std::string nomentraineur, std::string lieudugrade);
    void ajouterUnTitre(TitreGagnee* ptrtitre);
    ~Entraineur_class();
};


#endif //TP1_POO_2021_ENTRAINEUR_CLASS_H
