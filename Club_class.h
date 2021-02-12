//
// Created by Simon Duchesne on 2021-01-21.
//

#ifndef TP1_POO_2021_CLUB_CLASS_H
#include <chrono>
#include <string>
#include <list>
#include "Date_class.h"
#include "TitreGagnee.h"
#include "Entraineur_class.h"
#include "Joueur_class.h"
#include <vector>
#include "Stade_class.h"
#define TP1_POO_2021_CLUB_CLASS_H


class Club_class {
private:
    std::string histoireDuClub_string, couleurDuClub_string, villeDuClub_string, adresseDuClub_string;
    Date_class* ptrDateDeCreationDuClub;
    Stade_class* ptrDuStadeDuClub;
    Entraineur_class* ptrEntraineurDeLequipe;
    std::vector<TitreGagnee*>Palmares;
    std::vector<Joueur_class*>Effectif;
protected:
public:
    void ajouterUnTitre(TitreGagnee* ptrtitreaajouter);
    void ajouterJoueurALaListe(Joueur_class* ptrjoueuraajouterauclub);

    std::string gethistoireduclub();
    std::string getcouleurduclub();
    std::string getvilleduclub();
    std::string getadresseduclub();
    Date_class* getptrdatedecreation();
    Entraineur_class* getentraineurduclub();
    int getnombredetitreduclub();
    int getnombredejoueurtotalduclub();
    Joueur_class* getptrdunjoueurspecifique(int numerodujoueurdanslaliste);
    TitreGagnee* getptrduntitrespecifiquedelalisteduclub(int numerodutitredanslaliste);
};


#endif //TP1_POO_2021_CLUB_CLASS_H
