#pragma once
#include <string>
#include "EcrivainGrille.h"
#include "IObservateur.h"

// Observateur en mode console : écrit chaque génération dans le dossier de sortie.
class InterfaceConsole final : public IObservateur {
public:
    InterfaceConsole(EcrivainGrille ecrivain, std::string dossierSortie);
    void surGeneration(const Grille& grille, int generation) override;

private:
    EcrivainGrille ecrivain_;
    std::string dossierSortie_;
};
