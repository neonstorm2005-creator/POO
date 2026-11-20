# Jeu de la Vie (C++ / SFML) — Projet POO

Implémentation orientée objet du Jeu de la Vie de John Conway en C++ standard, intégrant une interface graphique (SFML) et un mode console.

## Architecture & Design Patterns
- **State Pattern** : Gestion dynamique de l'état des cellules (`EtatVivant`, `EtatMort`, `EtatObstacle`).
- **Strategy Pattern** : Découplage des règles de calcul (`RegleConway`) et du calcul du voisinage (`TopologiePlanaire`, `TopologieTorique`).
- **Observer Pattern** : Séparation stricte entre le moteur de simulation (`Simulation`) et les vues (`InterfaceConsole`, `InterfaceGraphique`).

## Compilation et exécution

### Prérequis
- Compilateur compatible C++20 (`g++` ou `clang++`)
- Bibliothèque SFML 2.5+ (`libsfml-dev`)

### Compilation
```bash
make
