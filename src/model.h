//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_MODEL_H
#define MYVENSIM_MODEL_H

#include "flow.h"
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
    virtual void add(Flow *f) = 0;

    /**
     * Remove a flow to Model
     * @param f
     */
    virtual void remove(Flow *f) = 0;

    /**
     * Get Model's name
     * @return Model's name
     */
    virtual const char *getName() const = 0;

    /**
     * Set Model's name
     * @param name Model's name
     */
    virtual void setName(const char *name) = 0;
};

#endif //MYVENSIM_MODEL_H
