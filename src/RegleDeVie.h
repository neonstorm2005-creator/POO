#pragma once

// Règle de transition (Strategy) : décide si une cellule naît ou survit
// en fonction du nombre de voisines vivantes.
class RegleDeVie {
public:
    virtual ~RegleDeVie() = default;
    virtual bool naitre(int voisinesVivantes) const = 0;
    virtual bool survivre(int voisinesVivantes) const = 0;
};
