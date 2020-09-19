//
// Created by lucas on 14/09/2020.
//

#ifndef MYVENSIM_SYSTEM_H
#define MYVENSIM_SYSTEM_H
#include <string>


class System {

public:
    /**
     * Set a value
     * @param value
     */
    virtual void setValue(double) = 0;

    /**
     * Get a value
     * @return
     */
    virtual double getValue() = 0;

    virtual std::string getName() const = 0;

    virtual void setName(std::string name) = 0;
    virtual ~System() = default;
};
#endif //MYVENSIM_SYSTEM_H
