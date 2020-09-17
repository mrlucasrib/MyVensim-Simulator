//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_SYSTEM_H
#define MYVENSIM_SYSTEM_H


class System {

public:
    /**
     * Set a value
     * @param value
     */
    virtual void setValue(float) = 0;

    /**
     * Get a value
     * @return
     */
    virtual float getValue() = 0;

    virtual const char *getName() const = 0;

    virtual void setName(const char *name) = 0;
    virtual ~System() = default;
};
#endif //MYVENSIM_SYSTEM_H
