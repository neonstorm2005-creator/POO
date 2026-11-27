#include "EtatVivant.h"
#include "EtatMort.h"
#include "RegleDeVie.h"

EtatPtr EtatVivant::instance() {
    static const EtatPtr unique = std::make_shared<const EtatVivant>();
    return unique;
}

bool EtatVivant::estVivant() const {
    return true;
}

EtatPtr EtatVivant::suivant(const RegleDeVie& regle, int voisinesVivantes) const {
    return regle.survivre(voisinesVivantes) ? instance() : EtatMort::instance();
}
