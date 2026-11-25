#pragma once

class Grille;

// Interface Observer : reçoit une notification à chaque génération calculée.
class IObservateur {
public:
    virtual ~IObservateur() = default;
    virtual void surGeneration(const Grille& grille, int generation) = 0;
};
