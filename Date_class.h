//
// Created by Simon Duchesne on 2021-02-11.
//

#ifndef TP1_POO_2021_DATE_CLASS_H
#define TP1_POO_2021_DATE_CLASS_H
#include <string>

class Date_class {
private:
    int jour, mois, annee;
public:
    int getJour();
    int getMois();
    int getAnnee();

    Date_class(int jour, int mois, int annee);
};


#endif //TP1_POO_2021_DATE_CLASS_H
