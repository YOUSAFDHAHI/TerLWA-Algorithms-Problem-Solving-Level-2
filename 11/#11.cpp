#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
using namespace std;
int main()
{
    int num = clsNumbers::readPositiveNumber("Please enter the main number? ");
    if (clsNumbers::isPalindromeNumber(num))
        cout << "\nYES, it is Palindrome Number";
    else
        cout << "\nNO, it is NOT Palindrome Number";
}