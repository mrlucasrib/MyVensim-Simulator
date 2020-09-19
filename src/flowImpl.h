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
    std::string name;
public:
    /**
     * Default Flow's constructor
     */
    FlowImpl();

    /**
     * Constructor of copy
     * @param f FlowImpl
     */
    explicit FlowImpl(FlowImpl *f);

    /**
     * Flow's constructor with some params
     * @param from System's source
     * @param to System's target
     */
    FlowImpl(System *from, System *to);


    /**
     * Set SystemImpl's target
     * @param s System
     */
    void setTarget(System *s) override;

    /**
     * Get SystemImpl target
     * @return
     */
    System *getTarget() override;

    /**
     * Get SystemImpl's source
     * @return
     */
    System *getSource() override;

    /**
     * Clear SystemImpl's taget
     */
    void clearTarget() override;

    /**
     * Clear SystemImpl's source
     */
    void clearSource() override;

    /**
     * Set System's source
     */
    void setSource(System *) override;

    ~FlowImpl() override = default;

    /** operator = overload */
    FlowImpl &operator=(FlowImpl &);

    /** operator == overload */
    bool operator==(FlowImpl &);

    /**
     * Set Flow's name
     * @param n Flow name
     */
    void setName(std::string n) override;

    /**
     * Get Flow's name
     * @return
     */
    std::string getName() const override;

};


#endif //MYVENSIM_FLOWIMPL_H
