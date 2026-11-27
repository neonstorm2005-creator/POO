#pragma once
#include <memory>

class RegleDeVie;
class Etat;
using EtatPtr = std::shared_ptr<const Etat>;

// État d'une cellule (State pattern). Les instances sont partagées (flyweight).
class Etat {
public:
    virtual ~Etat() = default;
    virtual bool estVivant() const = 0;
    virtual bool estObstacle() const { return false; }
    virtual EtatPtr suivant(const RegleDeVie& regle, int voisinesVivantes) const = 0;
};
