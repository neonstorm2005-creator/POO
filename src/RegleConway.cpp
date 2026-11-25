#include "RegleConway.h"

bool RegleConway::naitre(int voisinesVivantes) const {
    return voisinesVivantes == 3;
}

bool RegleConway::survivre(int voisinesVivantes) const {
    return voisinesVivantes == 2 || voisinesVivantes == 3;
}
