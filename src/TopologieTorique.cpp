#include "TopologieTorique.h"

namespace {
int modulo(int valeur, int diviseur) {
    return ((valeur % diviseur) + diviseur) % diviseur;
}
}

std::optional<Position> TopologieTorique::resoudre(Position p, int dx, int dy) const {
    return Position{modulo(p.x + dx, largeur_), modulo(p.y + dy, hauteur_)};
}
