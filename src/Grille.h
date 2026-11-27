#pragma once
#include <cstddef>
#include <memory>
#include <vector>
#include "Cellule.h"
#include "Position.h"
#include "Topologie.h"

class RegleDeVie;

// Plateau de cellules. Les cellules sont rangées ligne par ligne (index = y * largeur + x).
class Grille {
public:
    Grille(int largeur, int hauteur, std::shared_ptr<const Topologie> topologie);

    int largeur() const;
    int hauteur() const;

    const Cellule& getCellule(Position p) const;
    void setCellule(Position p, Cellule cellule);
    int nombreVoisinesVivantes(Position p) const;

    // TODO : parcourir toutes les cases, calculer l'état suivant dans tampon.
    void calculerSuivante(const RegleDeVie& regle, Grille& tampon) const;
    // TODO : comparer case par case avec autre.
    bool sontIdentiques(const Grille& autre) const;

private:
    std::size_t indice(Position p) const;

    int largeur_;
    int hauteur_;
    std::vector<Cellule> cellules_;
    std::shared_ptr<const Topologie> topologie_;
};
