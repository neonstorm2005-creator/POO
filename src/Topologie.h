#pragma once
#include <optional>
#include "Position.h"

// Topologie du plateau (Strategy) : donne la case voisine de p dans la direction (dx, dy).
class Topologie {
public:
    Topologie(int largeur, int hauteur);
    virtual ~Topologie() = default;

    // Renvoie la case (p.x + dx, p.y + dy), ou rien si elle n'existe pas.
    virtual std::optional<Position> resoudre(Position p, int dx, int dy) const = 0;

    int largeur() const;
    int hauteur() const;

protected:
    int largeur_;
    int hauteur_;
};
