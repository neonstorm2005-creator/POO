#pragma once
#include "Topologie.h"

// Tore : les bords se rejoignent (la case à gauche de x = 0 est x = largeur - 1).
class TopologieTorique final : public Topologie {
public:
    using Topologie::Topologie;
    std::optional<Position> resoudre(Position p, int dx, int dy) const override;
};
