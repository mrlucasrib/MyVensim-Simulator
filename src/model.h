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
    double time;
public:
    Model();

    explicit Model(Model *);

    void execute(int start, int end);

    void add(System *s);

    void add(Flux *f);

    void remove(System *s);

    void remove(Flux *f);

protected:
    std::vector<Flux *> flux_vector;
    std::vector<System *> system_vector;
};


#endif //MYVENSIM_MODEL_H
