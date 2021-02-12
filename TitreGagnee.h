//
// Created by Simon Duchesne on 2021-02-11.
//

#ifndef TP1_POO_2021_TITREGAGNEE_H
#define TP1_POO_2021_TITREGAGNEE_H
#include <string>
#include "Date_class.h"

class TitreGagnee {
private:
    Date_class* ptrDateDObtention;
    std::string nomDuTitre;

public:
    std::string getNomDuTitre();
    Date_class* getptrDateDObtention();

    TitreGagnee(Date_class* ptrdateobtention, std::string nomdutit);
};


#endif //TP1_POO_2021_TITREGAGNEE_H
