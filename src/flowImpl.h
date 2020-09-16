//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_FLOWIMPL_H
#define MYVENSIM_FLOWIMPL_H

#include "flow.h"

class FlowImpl : public Flow {
protected:
    System *source;
    System *target;
public:
    /**
     * Default Flow's constructor
     */
    FlowImpl();

    /**
     * Constructor of copy
     * @param f FlowImpl
     */
    FlowImpl(FlowImpl *f);

    /**
     * Flow's constructor with some params
     * @param from SystemImpl source
     * @param to SystemImpl target
     */
    FlowImpl(System *from, System *to);

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
    System *getTarget();

    /**
     * Get SystemImpl's source
     * @return
     */
    System *getSource();

    /**
     * Clear SystemImpl's taget
     */
    void clearTarget();

    /**
     * Clear SystemImpl's source
     */
    void clearSource() override;

    void setSource(System *);

    ~FlowImpl() override = default;

    /** operator = overload */
    FlowImpl &operator=(const FlowImpl &);

    /** operator == overload */
    bool operator==(const FlowImpl &o);

};


#endif //MYVENSIM_FLOWIMPL_H
