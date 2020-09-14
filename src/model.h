//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_MODEL_H
#define MYVENSIM_MODEL_H

#include <vector>
#include "system.h"
#include "flux.h"

class Model {
private:
    /**
     * Time it takes to run
     */
    double time;

    Model &operator=(const Model &);

    /** operator == overload */
    bool operator==(const Model &);

public:
    /**
     * Default Model's constructor
     */
    Model();

    /**
     * Constructor of copy
     */
    explicit Model(Model *);

    /**
     * Run simulation
     * @param start
     * @param end
     */
    void execute(int start, int end);

    /**
     * Add a system to Model
     * @param s
     */
    void add(System *s);

    /**
     * Add a Flow to Model
     * @param f
     */
    void add(Flux *f);

    /**
     * Remove a System to Model
     * @param s
     */
    void remove(System *s);

    /**
     * Remove a flow to Model
     * @param f
     */
    void remove(Flux *f);

protected:
    /**
     * Flow vector
     */
    std::vector<Flux *> flux_vector;
    std::vector<System *> system_vector;
};


#endif //MYVENSIM_MODEL_H
