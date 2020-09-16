//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_FLUXIMPL_H
#define MYVENSIM_FLUXIMPL_H

#include "systemImpl.h"
#include "flux.h"

class FluxImpl : public Flux {
protected:
    SystemImpl *source;
    SystemImpl *target;
public:
    /**
     * Default Flux's constructor
     */
    FluxImpl();
    /**
     * Constructor of copy
     * @param f FluxImpl
     */
    FluxImpl(FluxImpl *f);

    /**
     * Flux's constructor with some params
     * @param from SystemImpl source
     * @param to SystemImpl target
     */
    FluxImpl(SystemImpl *from, SystemImpl *to);

    /**
     * Performs the flow
     * @return Return the result of the formula
     */
    virtual float execute() = 0;

    /**
     * Set SystemImpl's target
     * @param s System
     */
    void setTarget(System *s);

    /**
     * Get SystemImpl target
     * @return
     */
    SystemImpl *getTarget();

    /**
     * Get SystemImpl's source
     * @return
     */
    SystemImpl *getSource();

    /**
     * Clear SystemImpl's taget
     */
    void clearTarget();

    /**
     * Clear SystemImpl's source
     */
    void clearSource() override;

    void setSource(System*);


    /** operator = overload */
    FluxImpl &operator=(const FluxImpl &);

    /** operator == overload */
    bool operator==(const FluxImpl &o);

};


#endif //MYVENSIM_FLUXIMPL_H
