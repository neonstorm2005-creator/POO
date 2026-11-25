#pragma once
#include "RegleDeVie.h"

// Règles de Conway : naissance avec 3 voisines, survie avec 2 ou 3 voisines.
class RegleConway final : public RegleDeVie {
public:
    bool naitre(int voisinesVivantes) const override;
    bool survivre(int voisinesVivantes) const override;
};
