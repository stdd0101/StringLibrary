//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_BINARYSTRING_H
#define STRINGLIBRARY1_BINARYSTRING_H


#include "Stroka.h"

class BinaryString : public Stroka {
protected:
    int length;
    char content[];
public:
    BinaryString(int length, char content[]) {
        this->length = length;
        for(int i = 1; i <= length; i++) {
            this->content[i] = content[i];
        }
    }

    //TODO: бинарные операции со строками;
};


#endif //STRINGLIBRARY1_BINARYSTRING_H
