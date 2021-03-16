//
// Created by stdd0 on 16.03.2021.
//

#include "Stroka.h"
#include <iostream>

using namespace std;

void Stroka::Show() {
    cout << Stroka::content << endl;
}

void Stroka::toLower() {
    for (int i = 1; i <= Stroka::length; i++) {
        if (Stroka::content[i] >= 65 && Stroka::content[i] <= 90) {
            Stroka::content[i] += 32;
        }
    }
}

void Stroka::toUpper() {
    for (int i = 1; i <= Stroka::length; i++) {
        if (Stroka::content[i] >= 97 && Stroka::content[i] <= 122) {
            Stroka::content[i] -= 32;
        }
    }
}

void Stroka::addSymbolBegin() {
    char adding;
    cout << "Enter symbol to add" << endl;
    cin >> adding;
    Stroka::length++;
    for (int i = Stroka::length; i >= 1; i--) {
        Stroka::content[i] = Stroka::content[i+1];
    }
    for (int i = 1; i <= Stroka::length; i++) {
        Stroka::content[1] = adding;
    }
}

void Stroka::addSymbolEnd() {
    char adding;
    cout << "Enter symbol to add" << endl;
    cin >> adding;
    Stroka::length++;
    for (int i = Stroka::length; i >= 1; i--) {
        Stroka::content[i] = Stroka::content[i+1];
    }
    for (int i = 1; i <= Stroka::length; i++) {
        Stroka::content[Stroka::length] = adding;
    }
}

//TODO: реализация конкатенации строк;