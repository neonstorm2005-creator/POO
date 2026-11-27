#include "Cellule.h"
#include "RegleDeVie.h"
#include <utility>

Cellule::Cellule(EtatPtr etat) : etat_(std::move(etat)) {}

bool Cellule::estVivante() const {
    return etat_->estVivant();
}

bool Cellule::estObstacle() const {
    return etat_->estObstacle();
}

Cellule Cellule::evoluer(const RegleDeVie& regle, int voisinesVivantes) const {
    return Cellule(etat_->suivant(regle, voisinesVivantes));
}

const Etat& Cellule::etat() const {
    return *etat_;
}
