//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_BINARYSTRING_H
#define STRINGLIBRARY1_BINARYSTRING_H

#include <iostream>
#include "Stroka.h"

using namespace std;

class BinaryString : public Stroka {
protected:
    int *binaryContent;
public:
    BinaryString() : Stroka() {};
    BinaryString(int length, const char *content) : Stroka(length, content) {
        /*
        this->length = length;
        for(int i = 0; i < length; i++) {
            this->content[i] = content[i];
        }
         */
    };
    ~BinaryString() {};

    //TODO: бинарные операции со строками;
    int ctoi();
    char *itoc(int value, int length);
    int multipleBinaries(int x, int y);
    int sumBinaries(int x, int y);
    int subtractBinaries(int x, int y);
    int is_neg(int value, int length);
};


#endif //STRINGLIBRARY1_BINARYSTRING_H
