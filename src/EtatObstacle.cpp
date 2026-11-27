#include "EtatObstacle.h"

EtatObstacle::EtatObstacle(bool vivant) : vivant_(vivant) {}

EtatPtr EtatObstacle::instance(bool vivant) {
    static const EtatPtr obstacleVivant = std::make_shared<const EtatObstacle>(true);
    static const EtatPtr obstacleMort = std::make_shared<const EtatObstacle>(false);
    return vivant ? obstacleVivant : obstacleMort;
}

bool EtatObstacle::estVivant() const {
    return vivant_;
}

bool EtatObstacle::estObstacle() const {
    return true;
}

EtatPtr EtatObstacle::suivant(const RegleDeVie&, int) const {
    return instance(vivant_);
}
