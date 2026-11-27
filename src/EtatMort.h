#pragma once
#include "Etat.h"

class EtatMort final : public Etat {
public:
    static EtatPtr instance();
    bool estVivant() const override;
    EtatPtr suivant(const RegleDeVie& regle, int voisinesVivantes) const override;
};
