//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_STROKA_H
#define STRINGLIBRARY1_STROKA_H


class Stroka {
protected:
    int length;
    char content[];
public:
    Stroka(int length, char content[]) {
        this->length = length;
        for(int i = 1; i <= length; i++) {
            this->content[i] = content[i];
        }
    }
    ~Stroka() = default;
    void Show();
    void toUpper();
    void toLower();
    void addSymbolBegin();
    void addSymbolEnd();

    //TODO: конкатенация строк;
};




#endif //STRINGLIBRARY1_STROKA_H
