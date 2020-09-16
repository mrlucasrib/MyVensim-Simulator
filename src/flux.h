//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_FLUX_H
#define MYVENSIM_FLUX_H

#include "system.h"
class Flux {
public:

    virtual float execute() = 0;

    /**
     * Set SystemImpl's target
     * @param s
     */
    virtual void setTarget(System *s) = 0;

    /**
     * Get SystemImpl target
     * @return
     */
    virtual System *getTarget() = 0;

    /**
     * Get SystemImpl's source
     * @return
     */
    virtual System *getSource() = 0;

    /**
     * Clear SystemImpl's taget
     */
    virtual void clearTarget() = 0;

    /**
     * Clear SystemImpl's source
     */
    virtual void clearSource() = 0;

    virtual void setSource(System*) = 0;
    virtual ~Flux() = default;

//
//    /** operator == overload */
//    virtual bool operator==(const Flux &o) = 0;
};
#endif //MYVENSIM_FLUX_H
