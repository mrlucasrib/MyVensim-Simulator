//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_FLUX_H
#define MYVENSIM_FLUX_H

#include "system.h"

class Flux {
protected:
    System *source;
    System *target;
    const char *formula;
public:
    /**
     * Default Flux's constructor
     */
    Flux();
    /**
     * Flux's construtor with required params
     * @param from System source
     * @param to System target
     * @param formula Formula to be executed
     */
    Flux(System *from, System *to, const char *formula);
    /**
     * Flux's constructor with some params
     * @param from System source
     * @param to System target
     */
    Flux(System *from, System *to);
    /**
     * Performs the flow
     * @return Return the result of the formula
     */
    float execute();
    /**
     * Set formula to be executed
     * @param formula
     */
    void setFormula(const char *formula);
    /**
     * Set System's target
     * @param s
     */
    void setTarget(System *s);
    /**
     * Get System target
     * @return
     */
    System *getTarget();
    /**
     * Get System's source
     * @return
     */
    System *getSource();
    /**
     * Clear System's taget
     */
    void clearTarget();
    /**
     * Clear System's source
     */
    void clearSource();
private:
    /** operator = overload */
    Flux& operator= (const Flux&);
    /** operator == overload */
    bool operator== (const Flux&);

};


#endif //MYVENSIM_FLUX_H
