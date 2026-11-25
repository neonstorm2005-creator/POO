#include "TopologiePlane.h"

std::optional<Position> TopologiePlane::resoudre(Position p, int dx, int dy) const {
    Position voisine{p.x + dx, p.y + dy};
    if (voisine.x < 0 || voisine.y < 0 || voisine.x >= largeur_ || voisine.y >= hauteur_) {
        return std::nullopt;
    }
    return voisine;
}
