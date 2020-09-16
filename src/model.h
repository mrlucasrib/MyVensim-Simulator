//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_MODEL_H
#define MYVENSIM_MODEL_H

#include "flux.h"
#include "system.h"
class Model {


public:
    /**
     * Run simulation
     * @param start
     * @param end
     */
    virtual void execute(int start, int end) = 0;


    /**
     * Add a Flow to Model
     * @param f
     */
    virtual void add(Flux *f) = 0;


    /**
     * Remove a flow to Model
     * @param f
     */
    virtual void remove(Flux *f) = 0;
};

#endif //MYVENSIM_MODEL_H
