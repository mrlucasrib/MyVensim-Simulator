//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_SYSTEM_H
#define MYVENSIM_SYSTEM_H


class System {
protected:
    long double value;
public:
    /**
     * Default System's constructor
     */
    System();
    /**
     * System's constructor with a initial value
     */
    System(long double);
    /**
     * Constructor of copy
     * @param system
     */
    System(System *system);
    /**
     * Set a value
     * @param value
     */
    void setValue(long double value);
    /**
     * Get a value
     * @return
     */
    long double getValue();

private:
    /** Operator overload */
    System &operator=(const System &);

    /**  Operator == overload */
    bool operator==(const System &);
};


#endif //MYVENSIM_SYSTEM_H
