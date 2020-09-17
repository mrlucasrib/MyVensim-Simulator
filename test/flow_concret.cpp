//
// Created by lucas on 15/09/2020.
//

#include "flow_concret.h"

float FlowExp::execute() {
    return getSource()->getValue() * 0.01;
}

float FlowLog::execute() {
    return 0.01 * getTarget()->getValue() * (1 - getTarget()->getValue() / 70);

}

