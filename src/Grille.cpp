#include "Grille.h"
#include <optional>
#include <stdexcept>
#include <utility>

Grille::Grille(int largeur, int hauteur, std::shared_ptr<const Topologie> topologie)
    : largeur_(largeur),
      hauteur_(hauteur),
      cellules_(static_cast<std::size_t>(largeur) * static_cast<std::size_t>(hauteur)),
      topologie_(std::move(topologie)) {}

int Grille::largeur() const {
    return largeur_;
}

int Grille::hauteur() const {
    return hauteur_;
}

std::size_t Grille::indice(Position p) const {
    if (p.x < 0 || p.y < 0 || p.x >= largeur_ || p.y >= hauteur_) {
        throw std::out_of_range("Position hors de la grille");
    }
    return static_cast<std::size_t>(p.y) * static_cast<std::size_t>(largeur_) + static_cast<std::size_t>(p.x);
}

const Cellule& Grille::getCellule(Position p) const {
    return cellules_[indice(p)];
}

void Grille::setCellule(Position p, Cellule cellule) {
    cellules_[indice(p)] = std::move(cellule);
}

int Grille::nombreVoisinesVivantes(Position p) const {
    int compte = 0;
    for (int dy = -1; dy <= 1; ++dy) {
        for (int dx = -1; dx <= 1; ++dx) {
            if (dx == 0 && dy == 0) {
                continue;
            }
            std::optional<Position> voisine = topologie_->resoudre(p, dx, dy);
            if (voisine && getCellule(*voisine).estVivante()) {
                ++compte;
            }
        }
    }
    return compte;
}

void Grille::calculerSuivante(const RegleDeVie&, Grille&) const {
    // TODO : pour chaque case, n = nombreVoisinesVivantes(p), puis
    // tampon.setCellule(p, getCellule(p).evoluer(regle, n)).
    throw std::logic_error("Grille::calculerSuivante : pas encore implémentée");
}

bool Grille::sontIdentiques(const Grille&) const {
    // TODO : comparer les cellules case par case.
    throw std::logic_error("Grille::sontIdentiques : pas encore implémentée");
}
