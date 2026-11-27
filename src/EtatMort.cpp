#include "EtatMort.h"
#include "EtatVivant.h"
#include "RegleDeVie.h"

EtatPtr EtatMort::instance() {
    static const EtatPtr unique = std::make_shared<const EtatMort>();
    return unique;
}

bool EtatMort::estVivant() const {
    return false;
}

EtatPtr EtatMort::suivant(const RegleDeVie& regle, int voisinesVivantes) const {
    return regle.naitre(voisinesVivantes) ? EtatVivant::instance() : instance();
}
