#include "Simulation.h"
#include <stdexcept>
#include <utility>

Simulation::Simulation(Grille grille, std::shared_ptr<const RegleDeVie> regle)
    : grille_(std::move(grille)), tampon_(grille_), regle_(std::move(regle)) {}

void Simulation::iterer() {
    grille_.calculerSuivante(*regle_, tampon_);
    std::swap(grille_, tampon_);
    ++generation_;
    notifierObservateurs();
}

bool Simulation::estStable() const {
    // TODO : comparer grille_ et tampon_ après calcul (ou à la génération précédente).
    throw std::logic_error("Simulation::estStable : pas encore implémentée");
}

void Simulation::ajouterObservateur(IObservateur* observateur) {
    if (observateur != nullptr) {
        observateurs_.push_back(observateur);
    }
}

const Grille& Simulation::getGrille() const {
    return grille_;
}

int Simulation::getGeneration() const {
    return generation_;
}

void Simulation::notifierObservateurs() const {
    for (IObservateur* observateur : observateurs_) {
        observateur->surGeneration(grille_, generation_);
    }
}
