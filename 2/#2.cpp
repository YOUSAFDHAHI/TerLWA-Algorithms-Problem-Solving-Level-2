#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
using namespace std;

int main()
{
    short num = clsNumbers::readPositiveNumber();
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " To " << num;
    cout << " are : " << endl;
    clsNumbers::printPrimeNumbersFrom1ToN(num);
}