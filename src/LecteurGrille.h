#pragma once
#include <memory>
#include <string>
#include "Grille.h"

// Lit une grille depuis un fichier texte : première ligne "largeur hauteur", puis les valeurs.
class LecteurGrille {
public:
    Grille lire(const std::string& chemin, std::shared_ptr<const Topologie> topologie) const;
};
