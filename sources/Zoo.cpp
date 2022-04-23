//
// Created by Enzo on 23/04/2022.
//

#include "Zoo.h"

Zoo *Zoo::singleton = nullptr;

Zoo::Zoo() {
    Bank = 0;
}

Zoo *Zoo::getZoo() {
    if (!singleton) {
        singleton = new Zoo();
    }
    return singleton;
}

int Zoo::getBank() {
    return Bank;
}
