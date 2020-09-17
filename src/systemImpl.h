//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_SYSTEMIMPL_H
#define MYVENSIM_SYSTEMIMPL_H

#include "system.h"

class SystemImpl : public System {
protected:
    float value;
    const char* name;
public:
    const char *getName() const;

    void setName(const char *name);

    /**
     * Default SystemImpl's constructor
     */
    SystemImpl();

    /**
     * SystemImpl's constructor with a initial value
     */
    explicit SystemImpl(float);

    /**
     * Constructor of copy
     * @param system
     */
    explicit SystemImpl(SystemImpl *system);

    /**
     * Set a value
     * @param value
     */
    void setValue(float) override;

    /**
     * Get a value
     * @return
     */
    float getValue() override;

    ~SystemImpl() override = default;


    /** Operator overload */
    SystemImpl &operator=(const SystemImpl &);

    /**  Operator == overload */
    bool operator==(const SystemImpl &);
};


#endif //MYVENSIM_SYSTEMIMPL_H
