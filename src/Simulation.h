#pragma once
#include <memory>
#include <vector>
#include "Grille.h"
#include "IObservateur.h"

class RegleDeVie;

// Moteur de simulation : fait évoluer la grille et prévient les observateurs.
// Double tampon : grille_ est la génération courante, tampon_ reçoit la suivante.
class Simulation {
public:
    Simulation(Grille grille, std::shared_ptr<const RegleDeVie> regle);

    void iterer();
    bool estStable() const;  // TODO

    // Les observateurs ne sont pas possédés par la simulation (agrégation).
    void ajouterObservateur(IObservateur* observateur);

    const Grille& getGrille() const;
    int getGeneration() const;

private:
    void notifierObservateurs() const;

    Grille grille_;
    Grille tampon_;
    std::shared_ptr<const RegleDeVie> regle_;
    int generation_ = 0;
    std::vector<IObservateur*> observateurs_;
};
