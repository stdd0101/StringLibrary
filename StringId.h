//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_STRINGID_H
#define STRINGLIBRARY1_STRINGID_H


#include "Stroka.h"

class StringId : public Stroka {
protected:

public:
    StringId(int length1, char *content1) : Stroka(length1, content1) {
        this->length = length;
        for(int i = 1; i <= length; i++) {
            this->content[i] = content[i];
        }
    }

    //TODO: добавление символа в конец строки, проверка на id;
};


#endif //STRINGLIBRARY1_STRINGID_H
