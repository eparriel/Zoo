//
// Created by Enzo on 23/04/2022.
//

#ifndef ZOO_ZOO_H
#define ZOO_ZOO_H


class Zoo {
    static Zoo* singleton;
    int Bank;
    Zoo();
public:
    static Zoo* getZoo();
    int getBank();
};


#endif //ZOO_ZOO_H
