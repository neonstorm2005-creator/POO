#pragma once
#include "Etat.h"
#include "EtatMort.h"

class RegleDeVie;

// Une cellule porte un état partagé ; elle sait calculer son état suivant.
class Cellule {
public:
    Cellule(EtatPtr etat = EtatMort::instance());

    bool estVivante() const;
    bool estObstacle() const;
    Cellule evoluer(const RegleDeVie& regle, int voisinesVivantes) const;
    const Etat& etat() const;

private:
    EtatPtr etat_;
};
