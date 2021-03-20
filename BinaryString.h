//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_BINARYSTRING_H
#define STRINGLIBRARY1_BINARYSTRING_H


#include "Stroka.h"

class BinaryString : public Stroka {
protected:
    int *binaryContent;
public:
    BinaryString(int length1, char *content1) : Stroka(length1, content1) {
        this->length = length;
        for(int i = 0; i < length; i++) {
            this->content[i] = content[i];
        }
    }

    //TODO: бинарные операции со строками;
    int ctoi();
    char *itoc(int value, int length);
    int multipleBinaries(int x, int y);
    int sumBinaries(int x, int y);
    int subtractBinaries(int x, int y);
    int is_neg(int value, int length);
};


#endif //STRINGLIBRARY1_BINARYSTRING_H
