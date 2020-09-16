//
// Created by lucas on 15/09/2020.
//

#include "flux_concret.h"

float FluxExp::execute() {
    return getSource()->getValue() * 0.01;
}

float FluxLog::execute() {
    return 0.01 * getTarget()->getValue() * (1 - getTarget()->getValue() / 70);

}

