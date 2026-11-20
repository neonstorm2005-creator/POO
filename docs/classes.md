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

    class Position {
        +x: int
        +y: int
    }

    class Etat {
        <<abstract>>
        +estVivant()* bool
        +suivant(regle: RegleDeVie, voisines: int)* EtatPtr
    }

    class EtatVivant {
        +estVivant() bool
        +suivant(regle: RegleDeVie, voisines: int) EtatPtr
    }

    class EtatMort {
        +estVivant() bool
        +suivant(regle: RegleDeVie, voisines: int) EtatPtr
    }

    class EtatObstacle {
        -vivant: bool
        +estVivant() bool
        +suivant(regle: RegleDeVie, voisines: int) EtatPtr
    }

    class RegleDeVie {
        <<abstract>>
        +naitre(voisines: int)* bool
        +survivre(voisines: int)* bool
    }

    class RegleConway {
        +naitre(voisines: int) bool
        +survivre(voisines: int) bool
    }

    class Topologie {
        <<abstract>>
        +resoudre(pos: Position, w: int, h: int)* optional~Position~
    }

    class TopologiePlanaire {
        +resoudre(pos: Position, w: int, h: int) optional~Position~
    }

    class TopologieTorique {
        +resoudre(pos: Position, w: int, h: int) optional~Position~
    }

    class LecteurGrille {
        +lire(fichier: string) Grille
    }

    class EcrivainGrille {
        +ecrire(g: Grille, dossier: string, gen: int) void
    }

    class IObservateur {
        <<interface>>
        +surGeneration(g: Grille, gen: int)* void
    }

    class InterfaceConsole {
        -ecrivain: EcrivainGrille
        -dossierSortie: string
        +surGeneration(g: Grille, gen: int) void
    }

    class InterfaceGraphique {
        -delaiMs: int
        +surGeneration(g: Grille, gen: int) void
        +lancer() void
    }

    Application --> Simulation : cree
    Application --> LecteurGrille : utilise
    Simulation o-- IObservateur : notifie
    Simulation *-- Grille : contient
    Grille *-- Cellule : contient
    Cellule --> Etat : possede
    Etat <|-- EtatVivant
    Etat <|-- EtatMort
    Etat <|-- EtatObstacle
    RegleDeVie <|-- RegleConway
    Topologie <|-- TopologiePlanaire
    Topologie <|-- TopologieTorique
    Grille --> Topologie : utilise
    IObservateur <|.. InterfaceConsole
    IObservateur <|.. InterfaceGraphique
    InterfaceConsole --> EcrivainGrille : utilise
