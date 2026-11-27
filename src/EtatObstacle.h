#pragma once
#include "Etat.h"

// Obstacle : case qui ne change jamais. Elle est soit vivante, soit morte,
// selon ce qu'elle était à la pose, et son état ne bouge plus.
class EtatObstacle final : public Etat {
public:
    explicit EtatObstacle(bool vivant);
    static EtatPtr instance(bool vivant);
    bool estVivant() const override;
    bool estObstacle() const override;
    EtatPtr suivant(const RegleDeVie& regle, int voisinesVivantes) const override;
private:
    bool vivant_;
};
