#pragma once

// Coordonnées d'une case de la grille.
struct Position {
    int x = 0;
    int y = 0;

    bool operator==(const Position& autre) const { return x == autre.x && y == autre.y; }
    bool operator!=(const Position& autre) const { return !(*this == autre); }
};
