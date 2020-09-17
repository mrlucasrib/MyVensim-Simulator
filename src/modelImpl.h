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

    ModelImpl &operator=(ModelImpl &);

    /** operator == overload */
    bool operator==(ModelImpl &);

    std::vector<Flow *> flowContainer;
    std::vector<System *> systemContainer;
    const char *name;


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
    void execute(int start, int end) override;

    void remove(Flow *) override;

    /**
     * Add a Flow to ModelImpl
     * @param f
     */
    void add(Flow *f) override;

    const char *getName() const override;

    void setName(const char *name) override;

    /**
     * Flow vector
     */
    typedef std::vector<System *>::iterator systemIterator;
    typedef std::vector<Flow *>::iterator flowIterator;
};


#endif //MYVENSIM_MODELIMPL_H
