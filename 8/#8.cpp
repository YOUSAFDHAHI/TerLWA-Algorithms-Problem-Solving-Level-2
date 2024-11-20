#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
using namespace std;
int main()
{
    int num = clsNumbers::readPositiveNumber("Please enter the main number? ");
    short digitToCheck = clsNumbers::readPositiveNumber("Please enter one digit to check?");
    cout << "\nDigit " << digitToCheck << " Frequency is " << clsNumbers::countDigitFrequency(num, digitToCheck);
}