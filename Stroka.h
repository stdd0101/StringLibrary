//
// Created by stdd0 on 16.03.2021.
//

#ifndef STRINGLIBRARY1_STROKA_H
#define STRINGLIBRARY1_STROKA_H


class Stroka {
protected:
    int length;
    char *content;
public:
    Stroka(int length, char *content) {
        this->length = length;
        for(int i = 0; i < length; i++) {
            this->content[i] = content[i];
        }
    }
    ~Stroka() = default;
    void show();
    void toUpper();
    void toLower();
    void addSymbolBegin(char adding);
    void addSymbolEnd(char adding);
    void concat(char addition[]);
    int size(char *ptr);

    void setLength(int length);
    void setContent(char *content);
    //TODO: конкатенация строк;
};




#endif //STRINGLIBRARY1_STROKA_H
