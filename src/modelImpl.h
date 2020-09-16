//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_MODELIMPL_H
#define MYVENSIM_MODELIMPL_H

#include <vector>
#include "systemImpl.h"
#include "fluxImpl.h"

class ModelImp {
private:
    /**
     * Time it takes to run
     */
    double time;

    ModelImp &operator=(const ModelImp &);

    /** operator == overload */
    bool operator==(const ModelImp &);

public:
    /**
     * Default ModelImp's constructor
     */
    ModelImp();

    /**
     * Constructor of copy
     */
    explicit ModelImp(ModelImp *);

    /**
     * Run simulation
     * @param start
     * @param end
     */
    void execute(int start, int end);

    void remove(Flux*);
    /**
     * Add a Flow to ModelImp
     * @param f
     */
    void add(FluxImpl *f);
    /**
     * Flow vector
     */
    std::vector<Flux *> flux_vector;
};


#endif //MYVENSIM_MODELIMPL_H
