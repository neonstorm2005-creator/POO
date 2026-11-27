#pragma once
#include <string>
#include "Grille.h"

// Écrit une génération dans un fichier "generation_<n>.txt" du dossier donné.
class EcrivainGrille {
public:
    void ecrire(const Grille& grille, const std::string& dossier, int generation) const;
};
