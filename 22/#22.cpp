#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsString.h"
using namespace std;
int main()
{
    short length = clsNumbers::readPositiveNumber("\nEnter a length of array? ");
    int arr[100];
    clsNumbers::readArray(arr, length);
    clsNumbers::printArray(arr, length);
    short digitToCheck = clsNumbers::readPositiveNumber("\nEnter the number you want to check? ");
    cout << digitToCheck << " is repeted " << clsNumbers::countFrequencyNumberInArray(arr, length, digitToCheck)
         << " time(s)" << endl;
}