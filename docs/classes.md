```mermaid
classDiagram
    class Application {
        +executer(args) int
    }

    class Simulation {
        -grille: Grille
        -tampon: Grille
        -regle: shared_ptr~RegleDeVie~
        -generation: int
        -observateurs: vector~IObservateur*~
        +iterer() void
        +estStable() bool
        +ajouterObservateur(obs: IObservateur*) void
        +getGrille() Grille
        +getGeneration() int
    }

    class Grille {
        -largeur: int
        -hauteur: int
        -cellules: vector~Cellule~
        -topologie: shared_ptr~Topologie~
        +getCellule(pos: Position) Cellule
        +setCellule(pos: Position, c: Cellule) void
        +nombreVoisinesVivantes(pos: Position) int
        +calculerSuivante(regle: RegleDeVie, g: Grille) void
        +sontIdentiques(g: Grille) bool
    }

    class Cellule {
        -etat: EtatPtr
        +estVivante() bool
        +evoluer(regle: RegleDeVie, voisines: int) Cellule
    }
