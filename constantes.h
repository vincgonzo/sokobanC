/*
constantes.h
------------

Par mateo21, pour Le Site du Z�ro (www.siteduzero.com)
R�le : d�finit des constantes pour tout le programme (taille de la fen�tre...)
*/

#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES

    #define TAILLE_BLOC 34
    #define NB_BLOCS_LARGEUR 12
    #define NB_BLOCS_HAUTEUR 12
    #define LARGEUR_FENETRE TAILLE_BLOC * NB_BLOCS_LARGEUR
    #define HAUTEUR_FENETRE TAILLE_BLOC * NB_BLOCS_HAUTEUR

    enum {HAUT, BAS, GAUCHE, DROITE};
    enum {VIDE, MUR, CAISSE, OBJECTIF, MARIO, CAISSE_OK};

#endif // DEF_CONSTANTES
