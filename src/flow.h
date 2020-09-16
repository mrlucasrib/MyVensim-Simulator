//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_FLOW_H
#define MYVENSIM_FLOW_H

#include "system.h"
class Flow {
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
    virtual ~Flow() = default;

//
//    /** operator == overload */
//    virtual bool operator==(const Flow &o) = 0;
};
#endif //MYVENSIM_FLOW_H
