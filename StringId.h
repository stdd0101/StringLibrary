//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_STRINGID_H
#define STRINGLIBRARY1_STRINGID_H


#include "Stroka.h"

class StringId : public Stroka {
protected:
    int length;
    char content[];
public:
    StringId(int length, char content[]) {
        this->length = length;
        for(int i = 1; i <= length; i++) {
            this->content[i] = content[i];
        }
    }

    //TODO: добавление символа в конец строки, проверка на id;
};


#endif //STRINGLIBRARY1_STRINGID_H
