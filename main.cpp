#include <iostream>
#include "Stroka.h"
#include "BinaryString.h"

using namespace std;

int main() {
    /*
    cout << "Enter number:" << endl;
    cout << "0 - operations with Stroka | 1 - operations binary string | 2 - operations string id" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 0:
               Stroka *stroka = new Stroka(6, "AbCwewg");
               stroka->show();
               char addition[] = "sdgTaf";
               stroka->concat(addition);
               stroka->toLower();
               stroka->show();
               stroka->toUpper();
               stroka->show();
               char adding;
               cout << "Enter symbol to add" << endl;
               cin >> adding;
               stroka->addSymbolBegin(adding);
               stroka->addSymbolEnd(adding);
        //case 1:

        //case 2:
        //default: break;
    }
     */

    char str[] = "101";
    char str1[] = "111";

    auto *stroka = new BinaryString(3, str);
    int a = stroka->ctoi();
    cout << "a: \n" << a << endl;

    stroka->setContent(str1);
    int b = stroka->ctoi();
    cout << "b: \n" << b << endl;

       int result = stroka->subtractBinaries(a, b);
       cout << "Result of subtractBinaries: \n " << result << endl;

//       char *resultToChar = strokaA->itoc(result, 4);
//       cout << result ;
//       cout << "\n" << resultToChar;

       result = stroka->multipleBinaries(a, b);
//       char *resultToChar = strokaA->itoc(result, 3 + 3);
       cout << "Result of multipleBinaries: \n " << result << endl;
//       cout << "\n" << resultToChar;

       result = stroka->sumBinaries(a, b);
    //char * resultToChar = strokaA->itoc(result, 6);
       cout << "Result of sumBinaries:\n " << result << endl;
    //   cout << "\n" << resultToChar;

    return 0;
}