#include "InterfaceConsole.h"
#include <utility>

InterfaceConsole::InterfaceConsole(EcrivainGrille ecrivain, std::string dossierSortie)
    : ecrivain_(std::move(ecrivain)), dossierSortie_(std::move(dossierSortie)) {}

void InterfaceConsole::surGeneration(const Grille& grille, int generation) {
    ecrivain_.ecrire(grille, dossierSortie_, generation);
}
