//
// Created by lucas on 11/09/2020.
//

#include "system.h"

using namespace std;

System::System(long double value) {
    this->value = value;
}

System::System(System *system) {
    this->value = system->value;
}

System::System() {
    this->value = 0;
}

long double System::getValue() {
    return this->value;
}

void System::setValue(long double value) {
    this->value = value;
}

