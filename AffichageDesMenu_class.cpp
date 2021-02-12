//
// Created by Simon Duchesne on 2021-01-22.
//

#include "AffichageDesMenu_class.h"

void AffichageDesMenu_class::afficherMenuPrincipale() {
    std::cout << "Veuillez entrer le numero associer à l'option de votre choix" << std::endl;
    std::cout << "===== Enregistrement =====" << std::endl;
    std::cout << "1) Enregistrer un nouveau joueur" << std::endl;
    std::cout << "2) Enregistrer un entraineur " << std::endl;
    std::cout << "3) Enregistrer un nouveau stade" << std::endl;
    std::cout << "4) Enregistrer un nouveau club" << std::endl;
    std::cout << "===== Affichage =====" << std::endl;
    std::cout << "5) Afficher tous les joueurs enregistrés" << std::endl;
    std::cout << "6) Afficher tous les entraineurs" << std::endl;
    std::cout << "7) Afficher tous les clubs " << std::endl;
    std::cout << "8) Afficher les joueur d'un club" << std::endl;
    std::cout << "9) Afficher le club et l'entraineur les plus titrés" << std::endl;
    std::cout << "===== Supression =====" << std::endl;
    std::cout << "10) Supprimer un club du registre" << std::endl;
    std::cout << "===== Quitter =====" << std::endl;
    std::cout << "0) Quitter" << std::endl;
    std::cout << "Veuillez entrer votre choix (ex:3) :";
}

void AffichageDesMenu_class::afficherLancementdeLApp_void() {
    std::cout << "TP1 - Partie Miniprojet - Simon Duchesne - DUCS20069507 - 22 Janvier" << std::endl;
}

void AffichageDesMenu_class::afficherErreurDeSelection_void() {
    std::cout << "Le choix que vous avez fait n'est pas valide." << std::endl;
    std::cout << "Veuillez refaire votre choix" << std::endl;
}

void AffichageDesMenu_class::affichageEnregistrerJoueur_void(int etape) {
    if (etape==1){
        std::cout << "Veuillez entrer le prénom du joueur:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer le nom du joueur:";
    }
    if (etape==3){
        std::cout << "Veuillez entrer le poids du joueur:";
    }
    if (etape==4){
        std::cout << "Veuillez entrer la taille du joueur:";
    }
    if (etape==5){
        std::cout << "Veuillez entrer la ville de naissance du joueur:";
    }
}

void AffichageDesMenu_class::afficherUnJoueur(std::string prenom, std::string nom, float poids, float taille,
                                              std::string villedenaissance) {
    std::cout << std::endl;
    std::cout << prenom << " " << nom << std::endl;
    std::cout << "Taille: " << taille << std::endl;
    std::cout << "Poids: " << poids << std::endl;
    std::cout << "Ville de naissance: " << villedenaissance << std::endl;
}

void AffichageDesMenu_class::affichageCreationDeClub(int etape) {
    if (etape==1){
        std::cout << "Création d'un club en cours"<< std::endl;
        std::cout << "Veuillez entrer le nom du club:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer la couleur du club:";
    }
    if (etape==3){
        std::cout << "Veuillez entrer la ville du club:";
    }
    if (etape==4){
        std::cout << "Veuillez faire un résumé de l'histoire du club:";
    }
    if (etape==5){
        std::cout << "Veuillez entrer la date de création du club." << std::endl;
        std::cout << "Année (ex:1995):";
    }
    if (etape==6){
        std::cout << "mois (ex:06):";
    }
    if (etape==7){
        std::cout << "jour (ex:20):";
    }
    if (etape==8){
        std::cout << "Veuillez entrer le numéro de l'entraineur:";
    }
    if (etape==9){
        std::cout << "Veuillez entrer le numéro associé au stade pour l'équipe:";
    }
    if (etape==10){
        std::cout << "Combien de titre le club a-t'il à son actif?";
    }
    if (etape==11){
        std::cout << "Création du Club complété.";
    }
}

void AffichageDesMenu_class::affichageCreationEntraineur(int etape) {
    if (etape==1){
        std::cout << "Création d'un entraineur" << std::endl;
        std::cout << "Veuillez entrer le prénom de l'entraineur: ";
    }
    if (etape==2){
        std::cout << "Veuillez entrer le nom de l'entraineur: ";
    }
    if (etape==3){
        std::cout << "Veuillez entrer la ville d'obtention du grade de l'entraineur:";
    }
    if (etape==4){
        std::cout << "Veuillez entrer le nombre de titre de l'entraineur:";
    }
    if (etape==5){
        std::cout << "Entraineur créé." << std::endl;
    }
}

void AffichageDesMenu_class::affichageDeCreationDunStade(int etape) {

    if (etape==1){
        std::cout << "Création d'un Stade" << std::endl;
        std::cout << "Veuillez entrer le nom du stade:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer l'addresse du stade:";
    }
    if (etape==3){
        std::cout << "Veuillez entrer la capacité maximal du stade(ex:3400):";
    }
    if (etape==4){
        std::cout << "Veuillez indiquer le type du stade" << std::endl;
        std::cout << "Type de stade (ex:tartan)";
    }
}

void AffichageDesMenu_class::afficherNumero(int numero) {
std::cout << "numéro d'enregistrement: " << numero << std::endl;
}

void AffichageDesMenu_class::afficherUnEntraineur(std::string nom, std::string prenom) {
    std::cout << "Prenom: " << prenom << std::endl;
    std::cout << "Nom: " << nom << std::endl;
}

void AffichageDesMenu_class::afficherUnStade(std::string nomdustade, std::string adresse, int capmax) {
    std::cout << "Stade: " << nomdustade << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
    std::cout << "Capacité maximale: " << capmax <<std::endl ;
}

void AffichageDesMenu_class::afficherCreationDunTitre(int etape) {
    if (etape==1){
        std::cout << "Veuillez entrer le nom du titre:";
    }
    if (etape==2){
        std::cout << "Veuillez entrer la date d'obtention." << std::endl;
        std::cout << "Année (ex:2002):";
    }
    if (etape==3){
        std::cout << "Mois (ex:06):";
    }
    if (etape==4){
        std::cout << "Jour (ex:04):";
    }
}

void AffichageDesMenu_class::afficherAjoutDeJoueurClub(int etape) {
    if (etape == 1){
        std::cout << "Entrer le numéro associé au joueur:";
    }
    if (etape == 2){
        std::cout << "Voullez-vous entrer un autre joueur dans le club ? (y/n): ";
    }
}

void AffichageDesMenu_class::affichageJoueurClub(int etape) {
    if (etape == 1){
        std::cout << "Voici tous les clubs enregistrés: " << std::endl;
    }
    if (etape == 2){
        std::cout << "Veuillez entrer le numéro associé au club dont vous voullez voir les joueurs";
    }
    if (etape == 3){
        std::cout << "Voici les joueurs du club sélectionné" << std::endl;
    }
}

void AffichageDesMenu_class::affichernomdunclub(std::string nom, std::string couleur) {
    std::cout << "Nom du club: " << nom << std::endl;
    std::cout << "Couleur du club: " << couleur << std::endl;
}

void AffichageDesMenu_class::afficherLesPlusTitree(std::string nomClub, std::string couleurClub, int nombreTitreClub,
                                                   std::string prenomEntraineur, std::string nomEntraineur,
                                                   int nombbreTitreEntraineur) {
    std::cout << "===== Club le plus titré =====" << std::endl;
    std::cout << "Club: " << nomClub << std::endl;
    std::cout << "Couleur du club: " << couleurClub << std::endl;
    std::cout << "Total de titre: " << nombreTitreClub << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << std::endl;

    std::cout << "===== Entraineur le plus titré =====" << std::endl;
    std::cout << "Prenom: " << prenomEntraineur << std::endl;
    std::cout << "Nom: " << nomEntraineur << std::endl;
    std::cout << "Nombre de Titre: " << nombbreTitreEntraineur << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << std::endl;
}

void AffichageDesMenu_class::affichageSupressionDunClub(int etape) {

    if (etape == 1) {
        std::cout << "===== Supression d'un club =====" << std::endl;
        std::cout << "Voici tous les clubs enregistrés:" << std::endl;
    }
    if (etape == 2 ){
        std::cout << "Veuillez entrer le numéro associer au club que vous voullez supprimer:";
    }
    if (etape == 3){
        std::cout << "Voici le club sélectionné:" << std::endl;
    }
    if(etape == 4) {
        std::cout << "Êtes-vous certains de vouloir supprimer ce club?(y/n):";
    }
    if (etape == 0){
        std::cout << "Supression annulée." << std::endl;
    }
    if (etape == 5){
        std::cout << " Le club a été supprimer." << std::endl;
    }
}

