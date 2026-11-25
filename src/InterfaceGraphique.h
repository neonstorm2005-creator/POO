#pragma once
#include "IObservateur.h"

class Simulation;

// Observateur en mode graphique (SFML). Le rendu SFML sera ajouté dans une prochaine étape.
class InterfaceGraphique final : public IObservateur {
public:
    explicit InterfaceGraphique(int delaiMs);

    void surGeneration(const Grille& grille, int generation) override;
    void lancer(Simulation& simulation);  // TODO : boucle d'événements et de dessin

    void basculerPause();
    void modifierDelai(int variation);
    int delaiMs() const;
    bool estEnPause() const;

private:
    int delaiMs_;
    bool pause_ = false;
};
