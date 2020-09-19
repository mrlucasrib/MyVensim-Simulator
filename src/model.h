//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_MODEL_H
#define MYVENSIM_MODEL_H

#include <utility>

#include "flow.h"
#include "system.h"

enum class Type {
    Flow, System
};

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
    virtual void add(System *s) = 0;

    /**
     * Remove a flow to Model
     * @param f
     */
    virtual void remove(Flow *f) = 0;

    /**
     * Get Model's name
     * @return Model's name
     */
    virtual std::string getName() const = 0;

    /**
     * Set Model's name
     * @param name Model's name
     */
    virtual void setName(std::string name) = 0;

    /**
     * Checks if the model contains the object that corresponds to the ID
     * @return true if exists in model or false if not.
     */
    virtual bool exists(const std::string &, Type) = 0;

    virtual Flow *findFlow(const std::string &) = 0;

    virtual System *findSystem(const std::string &) = 0;

    virtual System *createSystem(const std::string &) = 0;

    virtual System *createSystem(const std::string &, double v) = 0;



    static Model *createModel();

    /** Create and add a new Flow */
    template<typename TYPE_FLOW>
    Flow *createFlow(std::string id, System *s, System *t) {
        Flow *f = new TYPE_FLOW(s, t);
        f->setName(std::move(id));
        add(f);
        return f;
    }

    template<typename TYPE_FLOW>
    Flow *createFlow(std::string id) {
        Flow *f = new TYPE_FLOW();
        f->setName(std::move(id));
        add(f);
        return f;
    }
};



#endif //MYVENSIM_MODEL_H
