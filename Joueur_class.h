//
// Created by Simon Duchesne on 2021-01-21.
//

#ifndef TP1_POO_2021_JOUEUR_CLASS_H
#define TP1_POO_2021_JOUEUR_CLASS_H
#include <string>




class Joueur_class {
private:
    std::string nomDuJoueur_string, prenomDuJoueur_sring, villeDeNaissanceDuJoueur_string;
    float poidsDuJoueur_float, tailleDuJoueur_float;
    //todo ParcoursDuJoueur est une liste de parcours. un parcours est caractérisé par le nom du club ou le joueur a joué
protected:
public:
    Joueur_class(std::string prenom, std::string nom, float poids, float taille, std::string villeDeNaissance);
    std::string getnomDuJoueur();
    std::string getprenomDuJoueur();
    std::string getvilleDeNaissanceDuJoueur();
    float getpoidsDuJoeur();
    float gettailleDuJoueur();
};


#endif //TP1_POO_2021_JOUEUR_CLASS_H