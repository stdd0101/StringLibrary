#include <iostream>
#include "Stroka.h"
#include "BinaryString.h"

using namespace std;

int main() {
    /*
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
     */

    auto *strokaA = new BinaryString(3, "101");
    //char strokaA[] = "101";
    int a = strokaA->ctoi();
    cout << a << endl;

    auto *strokaB = new BinaryString(3, "111");
    //char strokaB[] = "111";
    int b = strokaB->ctoi();
    cout << b << endl;
 /*
    int result = subtractBinaries(a, b);
    char *resultToChar = itoc(result, 4);

    cout << result ;
    cout << "\n" << resultToChar;

    result = multipleBinaries(a, b);
    resultToChar = itoc(result, 3 + 3);

    cout << "\n" << result ;
    cout << "\n" << resultToChar;

    result = sumBinaries(a, b);
    resultToChar = itoc(result, 6);

    cout << "\n" << result ;
    cout << "\n" << resultToChar;
     */
    return 0;
}
