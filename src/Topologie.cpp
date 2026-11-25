#include "Topologie.h"

Topologie::Topologie(int largeur, int hauteur) : largeur_(largeur), hauteur_(hauteur) {}

int Topologie::largeur() const {
    return largeur_;
}

int Topologie::hauteur() const {
    return hauteur_;
}
