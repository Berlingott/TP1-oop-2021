//
// Created by Simon Duchesne on 2021-01-21.
//

#ifndef TP1_POO_2021_LIGUESPORTIVE_CLASS_H
#include <vector>
#include "Joueur_class.h"
#include "Club_class.h"
#include "Entraineur_class.h"
#include "Stade_class.h"
#define TP1_POO_2021_LIGUESPORTIVE_CLASS_H


class LigueSportive_class {
private:
    std::vector<Joueur_class*> repertoireJoeur_vector;
    std::vector<Joueur_class*> repertoireClub_vector;
    std::vector<Entraineur_class*> repertoireEntraineur_vector;
    std::vector<Stade_class*> repertoireStade_vector;
protected:
public:
};


#endif //TP1_POO_2021_LIGUESPORTIVE_CLASS_H
