#include "InterfaceGraphique.h"
#include <algorithm>
#include <stdexcept>

InterfaceGraphique::InterfaceGraphique(int delaiMs) : delaiMs_(delaiMs) {}

void InterfaceGraphique::surGeneration(const Grille&, int) {
    // TODO : dessiner la grille avec SFML (les cellules vivantes et obstacles).
    throw std::logic_error("InterfaceGraphique::surGeneration : rendu SFML pas encore implémenté");
}

void InterfaceGraphique::lancer(Simulation&) {
    // TODO : fenêtre SFML, pollEvent (Espace = pause, +/- = délai, fermeture), puis iterer() et dessiner().
    throw std::logic_error("InterfaceGraphique::lancer : pas encore implémenté");
}

void InterfaceGraphique::basculerPause() {
    pause_ = !pause_;
}

void InterfaceGraphique::modifierDelai(int variation) {
    delaiMs_ = std::clamp(delaiMs_ + variation, 10, 1000);
}

int InterfaceGraphique::delaiMs() const {
    return delaiMs_;
}

bool InterfaceGraphique::estEnPause() const {
    return pause_;
}
