#pragma once
#include <string>

// Point d'entrée logique : lit les arguments et lance le mode choisi.
// Usage : main fichier.txt --console N   ou   main fichier.txt --gui delai_ms
class Application {
public:
    int executer(int argc, char* argv[]) const;

private:
    struct Parametres {
        std::string fichier;
        bool modeConsole = true;
        int valeur = 0;
    };

    static bool lireParametres(int argc, char* argv[], Parametres& parametres);
};
