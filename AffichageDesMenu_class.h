//
// Created by Simon Duchesne on 2021-01-22.
//

#ifndef TP1_POO_2021_AFFICHAGEDESMENU_CLASS_H
#include <iostream>
#define TP1_POO_2021_AFFICHAGEDESMENU_CLASS_H


class AffichageDesMenu_class {
private:
protected:
public:
    void afficherMenuPrincipale();
    void afficherLancementdeLApp_void();
    void afficherErreurDeSelection_void();
    void affichageEnregistrerJoueur_void(int etape);
    void afficherUnJoueur(std::string prenom, std::string nom, float poids, float taille, std::string villedenaissance);
};


#endif //TP1_POO_2021_AFFICHAGEDESMENU_CLASS_H
