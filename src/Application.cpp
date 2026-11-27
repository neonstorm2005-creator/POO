#include "Application.h"
#include <exception>
#include <iostream>
#include <string>

bool Application::lireParametres(int argc, char* argv[], Parametres& parametres) {
    if (argc != 4) {
        return false;
    }
    parametres.fichier = argv[1];

    const std::string option = argv[2];
    if (option == "--console") {
        parametres.modeConsole = true;
    } else if (option == "--gui") {
        parametres.modeConsole = false;
    } else {
        return false;
    }

    parametres.valeur = std::stoi(argv[3]);  // peut lever std::invalid_argument
    return parametres.valeur > 0;
}

int Application::executer(int argc, char* argv[]) const {
    Parametres parametres;
    bool valides = false;
    try {
        valides = lireParametres(argc, argv, parametres);
    } catch (const std::exception&) {
        valides = false;
    }

    if (!valides) {
        std::cerr << "Usage : main fichier.txt --console N | --gui delai_ms\n";
        return 1;
    }

    // TODO : lire la grille (LecteurGrille), créer la Simulation, enregistrer
    // l'observateur (InterfaceConsole ou InterfaceGraphique), puis lancer la boucle.
    std::cerr << "Mode non encore implémenté\n";
    return 2;
}
