//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_SYSTEMIMPL_H
#define MYVENSIM_SYSTEMIMPL_H

#include "system.h"

class SystemImpl : public System {
protected:
    double value;
    std::string name;
public:
    std::string getName() const;

    void setName(std::string name);

    /**
     * Default SystemImpl's constructor
     */
    SystemImpl();

    /**
     * SystemImpl's constructor with a initial value
     */
    explicit SystemImpl(double);

    /**
     * Constructor of copy
     * @param system
     */
    explicit SystemImpl(SystemImpl *system);

    /**
     * Set a value
     * @param value
     */
    void setValue(double) override;

    /**
     * Get a value
     * @return
     */
    double getValue() override;

    ~SystemImpl() override = default;


    /** Operator overload */
    SystemImpl &operator=(const SystemImpl &);

    /**  Operator == overload */
    bool operator==(const SystemImpl &);
};


#endif //MYVENSIM_SYSTEMIMPL_H
