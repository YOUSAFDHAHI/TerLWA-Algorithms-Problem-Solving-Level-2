#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsString.h"
using namespace std;
int main()
{
    srand((unsigned)time(NULL));

    short length = clsNumbers::readPositiveNumber("\nEnter a length of array? ");
    int arr1[100], arr2[100];
    clsNumbers::fillArrayWithRandomNumber(arr1, length);
    cout << "\nArray 1 elements: " << endl;
    clsNumbers::printArray(arr1, length);
    clsNumbers::copyArray(arr1, arr2, length);
    cout << "\nArray 2 elements after copy: " << endl;
    clsNumbers::printArray(arr2, length);
}