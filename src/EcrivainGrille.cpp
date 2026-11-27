#include "EcrivainGrille.h"
#include <filesystem>
#include <fstream>
#include <stdexcept>

void EcrivainGrille::ecrire(const Grille& grille, const std::string& dossier, int generation) const {
    std::filesystem::create_directories(dossier);
    const std::string chemin = dossier + "/generation_" + std::to_string(generation) + ".txt";

    std::ofstream fichier(chemin);
    if (!fichier) {
        throw std::runtime_error("Impossible d'écrire " + chemin);
    }

    fichier << grille.largeur() << ' ' << grille.hauteur() << '\n';
    // TODO : écrire une ligne par y, avec 0 (morte), 1 (vivante) ou 2 (obstacle) pour chaque x.
}
