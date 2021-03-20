//
// Created by stdd0 on 16.03.2021.
//

#include "Stroka.h"
#include <iostream>

using namespace std;

void Stroka::setLength(int length) {
    this->length = length;
}

void Stroka::setContent(char *content) {
    for(int i = 0; i < length; i++) {
        this->content[i] = content[i];
    };
}

void Stroka::show() {
    for (int i = 0; i < Stroka::length; i++) {
        cout << Stroka::content[i];
    }
    cout << endl;
}

void Stroka::toLower() {
    for (int i = 0; i < Stroka::length; i++) {
        if (Stroka::content[i] >= 65 && Stroka::content[i] <= 90) {
            Stroka::content[i] += 32;
        }
    }
}

void Stroka::toUpper() {
    for (int i = 0; i < Stroka::length; i++) {
        if (Stroka::content[i] >= 97 && Stroka::content[i] <= 122) {
            Stroka::content[i] -= 32;
        }
    }
}

void Stroka::addSymbolBegin(char adding) {
    char tmp[Stroka::length + 1];
    tmp[0] = adding;
    for (int i = 0; i < Stroka::length; i++) {
        tmp[i+1] = Stroka::content[i];
    }
   this->setLength(Stroka::length + 1);
   this->setContent(tmp);
   this->show();
}

void Stroka::addSymbolEnd(char adding) {
    char tmp[Stroka::length+1];
    for (int i = 0; i < Stroka::length; i++) {
        tmp[i] = Stroka::content[i];
    }
    tmp[Stroka::length] = adding;
    this->setLength(Stroka::length + 1);
    this->setContent(tmp);
    this->show();
}

void Stroka::concat(char addition[]) {
    char tmp[Stroka::length + this->size(addition)];
    for (int i = 0; i < Stroka::length; i++) {
        tmp[i] = Stroka::content[i];
    }

    int j = 0;
    for (int k = Stroka::length; k < Stroka::length + this->size(addition); k++) {
        tmp[k] = addition[j++];
    }
    this->setLength(Stroka::length + this->size(addition));
    this->setContent(tmp);
    this->show();

}

int Stroka::size(char *ptr) {
    size_t i;
    for (i = 0; ptr[i]; i++);
    return i;
}


//TODO: реализация конкатенации строк;