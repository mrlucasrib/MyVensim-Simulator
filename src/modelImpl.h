//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_MODELIMPL_H
#define MYVENSIM_MODELIMPL_H

#include <vector>
#include "model.h"
class ModelImpl : public Model {
private:
    /**
     * Time it takes to run
     */
    double time;

    ModelImpl &operator=(const ModelImpl &);

    /** operator == overload */
    bool operator==(const ModelImpl &);

public:
    /**
     * Default ModelImpl's constructor
     */
    ModelImpl();

    /**
     * Constructor of copy
     */
    explicit ModelImpl(ModelImpl *);

    /**
     * Run simulation
     * @param start
     * @param end
     */
    void execute(int start, int end);

    void remove(Flow*);
    /**
     * Add a Flow to ModelImpl
     * @param f
     */
    void add(Flow *f);
    /**
     * Flow vector
     */
    std::vector<Flow *> flux_vector;
};


#endif //MYVENSIM_MODELIMPL_H
