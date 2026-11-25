#include "LecteurGrille.h"
#include <fstream>
#include <stdexcept>
#include <utility>

Grille LecteurGrille::lire(const std::string& chemin, std::shared_ptr<const Topologie> topologie) const {
    std::ifstream fichier(chemin);
    if (!fichier) {
        throw std::runtime_error("Impossible d'ouvrir " + chemin);
    }

    int largeur = 0;
    int hauteur = 0;
    if (!(fichier >> largeur >> hauteur) || largeur <= 0 || hauteur <= 0) {
        throw std::runtime_error("En-tête invalide dans " + chemin);
    }

    Grille grille(largeur, hauteur, std::move(topologie));
    // TODO : lire les valeurs (0 = morte, 1 = vivante, 2 = obstacle), vérifier chaque
    // valeur et son nombre, puis appeler grille.setCellule(...).
    return grille;
}
