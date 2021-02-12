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
    std::vector<Club_class*> repertoireClub_vector;
    std::vector<Entraineur_class*> repertoireEntraineur_vector;
    std::vector<Stade_class*> repertoireStade_vector;
protected:
public:
    void ajouterUnJoueurAuRpertoire(Joueur_class* ptrjoueurclass);//todo
    int getGrandeurDuRepertoireDesJoueurs();
    int getGrandeurDuRepertoireDesClubs();
    int getGrandeurDuRepertoireDesStade();
    int getGrandeurDuRepertoireDesEntraineur();

    Entraineur_class* getPtrEntraineurDuRegistre(int positionDansVecteur);
    Joueur_class* getPtrJoueurDuRegistre(int positionDansVecteur);
    Club_class* getPtrClubDuRegistre(int positionDansVecteur);
    Stade_class* getPtrStadeDuRegistre(int poistionDansVecteur);

    void getInformationDuJoueur(int positionJoueurChercher);
    void ajouterUnClubAuRpertoire(Club_class* ptrclubclass);//todo
    void ajouterUnEntraineurAuRpertoire(Entraineur_class* ptrentraineurclass);//todo
    void ajouterUnStadeAuRpertoire(Stade_class* ptrstadeclass);//todo
};


#endif //TP1_POO_2021_LIGUESPORTIVE_CLASS_H
