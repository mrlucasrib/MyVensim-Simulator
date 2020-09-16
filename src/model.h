//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_MODEL_H
#define MYVENSIM_MODEL_H

#include "flux.h"
#include "system.h"

class Model {
private:
    /**
     * Time it takes to run
     */
    double time;

    virtual Model &operator=(const Model &) = 0;

    /** operator == overload */
    virtual bool operator==(const Model &) = 0;

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
     * Remove a System to Model
     * @param s
     */
    virtual void remove(System *s) = 0;

    /**
     * Remove a flow to Model
     * @param f
     */
    virtual void remove(Flux *f) = 0;
};

#endif //MYVENSIM_MODEL_H
