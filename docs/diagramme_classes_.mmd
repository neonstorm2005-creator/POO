classDiagram
    direction TB
 
    class Application {
        +executer(args) int
    }
 
    class Simulation {
        -Grille grille
        -Grille tampon
        -shared_ptr~RegleDeVie~ regle
        -int generation
        -vector~IObservateur~ observateurs
        +iterer() void
        +estStable() bool
        +ajouterObservateur(IObservateur) void
        +getGrille() Grille
        +getGeneration() int
    }
 
    class IObservateur {
        <<interface>>
        +surGeneration(Grille, int) void
    }
 
    class InterfaceConsole {
        -EcrivainGrille ecrivain
        -string dossierSortie
        +surGeneration(Grille, int) void
    }
 
    class InterfaceGraphique {
        -int delaiMs
        +surGeneration(Grille, int) void
        +lancer() void
    }
 
    class LecteurGrille {
        +lire(string) Grille
    }
 
    class EcrivainGrille {
        +ecrire(Grille, string, int) void
    }
 
    class Grille {
        -int largeur
        -int hauteur
        -vector~Cellule~ cellules
        -shared_ptr~Topologie~ topologie
        +getCellule(Position) Cellule
        +setCellule(Position, Cellule) void
        +nombreVoisinesVivantes(Position) int
        +calculerSuivante(RegleDeVie, Grille) void
        +sontIdentiques(Grille) bool
    }
 
    class Position {
        +int x
        +int y
    }
 
    class Cellule {
        -EtatPtr etat
        +estVivante() bool
        +evoluer(RegleDeVie, int) Cellule
    }
 
    class Etat {
        <<abstract>>
        +estVivant() bool
        +suivant(RegleDeVie, int) EtatPtr
    }
 
    class EtatVivant {
        +estVivant() bool
        +suivant(RegleDeVie, int) EtatPtr
    }
 
    class EtatMort {
        +estVivant() bool
        +suivant(RegleDeVie, int) EtatPtr
    }
 
    class EtatObstacle {
        -bool vivant
        +estVivant() bool
        +suivant(RegleDeVie, int) EtatPtr
    }
 
    class RegleDeVie {
        <<abstract>>
        +naitre(int) bool
        +survivre(int) bool
    }
 
    class RegleConway {
        +naitre(int) bool
        +survivre(int) bool
    }
 
    class Topologie {
        <<abstract>>
        +resoudre(Position, int, int) optional~Position~
    }
 
    class TopologiePlane {
        +resoudre(Position, int, int) optional~Position~
    }
 
    class TopologieTorique {
        +resoudre(Position, int, int) optional~Position~
    }
 
    Application ..> LecteurGrille : utilise
    Application ..> Simulation : crée
    Application ..> InterfaceConsole : crée
    Application ..> InterfaceGraphique : crée
 
    Simulation "1" --> "1" Grille : modifie
    Simulation "1" --> "1" RegleDeVie : applique
    Simulation "1" o-- "0..*" IObservateur : notifie
 
    IObservateur <|.. InterfaceConsole : réalise
    IObservateur <|.. InterfaceGraphique : réalise
    InterfaceConsole --> EcrivainGrille : utilise
 
    LecteurGrille ..> Grille : crée
    Grille "1" *-- "n" Cellule : contient
    Grille --> Topologie : utilise
    Grille ..> Position : indexe
 
    Cellule --> Etat : possède
    Cellule ..> RegleDeVie : dépend
    Etat ..> RegleDeVie : dépend
 
    Etat <|-- EtatVivant
    Etat <|-- EtatMort
    Etat <|-- EtatObstacle
 
    RegleDeVie <|-- RegleConway
 
    Topologie <|-- TopologiePlane
    Topologie <|-- TopologieTorique
 
