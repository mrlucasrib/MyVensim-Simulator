//
// Created by lucas on 11/09/2020.
//

#ifndef MYVENSIM_SYSTEM_H
#define MYVENSIM_SYSTEM_H


class System {
protected:
    double value;
public:
    System();
    System (float);
    System(System *system);

    void setValue(double value);
    double getValue();
private:
    /** Operator overload */
    System& operator= (const System&);
    /**  Operator == overload */
    bool operator== (const System&);
};


#endif //MYVENSIM_SYSTEM_H
