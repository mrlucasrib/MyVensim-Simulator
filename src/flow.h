//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_FLOW_H
#define MYVENSIM_FLOW_H

#include "system.h"

class Flow {
public:
    /**
    * Performs the flow
    * @return Return the result of the formula
    */
    virtual float execute() = 0;

    /**
     * Set System's target
     * @param s
     */
    virtual void setTarget(System *s) = 0;

    /**
     * Get System target
     * @return
     */
    virtual System *getTarget() = 0;

    /**
     * Get System's source
     * @return
     */
    virtual System *getSource() = 0;

    /**
     * Clear System's taget
     */
    virtual void clearTarget() = 0;

    /**
     * Clear System's source
     */
    virtual void clearSource() = 0;

    /**
     * Set System's source
     */
    virtual void setSource(System *) = 0;

    virtual ~Flow() = default;

    /**
     * Get name of the System
     * @return System's name
     */
    virtual const char *getName() const = 0;

    /**
     * Set name of the System
     * @param name System's name
     */
    virtual void setName(const char *name) = 0;
};

#endif //MYVENSIM_FLOW_H
