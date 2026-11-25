#pragma once
#include "Topologie.h"

// Plan : les bords sont des limites, il n'y a pas de voisine au-delà.
class TopologiePlane final : public Topologie {
public:
    using Topologie::Topologie;
    std::optional<Position> resoudre(Position p, int dx, int dy) const override;
};
