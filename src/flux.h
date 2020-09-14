//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_FLUX_H
#define MYVENSIM_FLUX_H

#include "system.h"

class Flux {
protected:
    System *source;
    System *target;
    const char *formula;
public:
    Flux();

    Flux(System *from, System *to);

    double execute();

    void setFormula(const char *formula);

    void setTarget(System *s);

    System *getTarget();

    System *getSource();

    void clearTarget();

    void clearSource();

};


#endif //MYVENSIM_FLUX_H
