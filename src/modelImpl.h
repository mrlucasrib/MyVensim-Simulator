//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_MODELIMPL_H
#define MYVENSIM_MODELIMPL_H

#include <vector>
#include "model.h"
#include "flowImpl.h"
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
    std::string name;


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

    std::string getName() const override;

    void setName(std::string n) override;

    System *createSystem(const std::string &) override;

    static Model *createModel();

    bool exists(const std::string &, Type) override;

    Flow *findFlow(const std::string &) override;

    System *findSystem(const std::string &) override;

    System *createSystem(const std::string &, double v) override;

    void add(System *s) override;

    /**
     * Flow vector
     */
    typedef std::vector<System *>::iterator systemIterator;
    typedef std::vector<Flow *>::iterator flowIterator;
};


#endif //MYVENSIM_MODELIMPL_H
