//
// Created by stdd0 on 16.03.2021.
//

#include <cstdlib>
#include <iostream>
#include "BinaryString.h"

//TODO: реализация бинарных операций со строками;

using namespace std;

int BinaryString::ctoi() {
    int rez = 0;
    for (int i = 0; i < this->length; i++) {
        rez = (rez << 1) | (this->content[i] =='1');
    }
    return rez;
}

char *BinaryString::itoc(int value, int length){
    char *resultString =(char*)malloc(length);//создаем новую ссылку на символьную строку

    int mask = 1 << (length-1);

    for(int i = 0; length > 0; length--, i++){
        resultString[i] = (value & mask) ? '1' : '0';
        mask >>= 1;
    }

    return resultString;
}

int BinaryString::multipleBinaries(int x, int y) {
    unsigned int result = 0;

    while (y != 0) {
        if (y & 1) {
            result += x;
        }
        x <<= 1;
        y >>= 1;
    }
    return result;
}

int BinaryString::sumBinaries(int x, int y) {
    while (x != 0)  {
        int c = y & x;
        y = y ^ x;
        x = c << 1;
    }
    return y;
}



int BinaryString::subtractBinaries(int x, int y) {
    while (y != 0) {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}

int BinaryString::is_neg(int value, int length) {
    int mask = 1<<(length-1);

    if(value & mask) {
        //*value |= ~(mask-1);//переводим в прямой код
        return 1;
    }
    return 0;
}
