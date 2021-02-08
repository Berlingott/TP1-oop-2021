//
// Created by Simon Duchesne on 2021-01-21.
//

#ifndef TP1_POO_2021_ENTRAINEUR_CLASS_H
#include <string>
#define TP1_POO_2021_ENTRAINEUR_CLASS_H


class Entraineur_class {
private:
    std::string nomEntraineur, prenomEntraineur, lieuObtentionDuGrade;
    //todo liste de titre gagnées type titre gagnés
protected:
public:
    std::string getNomEntraineur();
    std::string getPrenomEntraineur();
    std::string getLieuObtentionDuGrade();

    Entraineur_class(std::string prenomentraineur, std::string nomentraineur, std::string lieudugrade);
};


#endif //TP1_POO_2021_ENTRAINEUR_CLASS_H
