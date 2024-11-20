#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsString.h"
using namespace std;
int main()
{
    srand((unsigned)time(NULL));

    short lengthArr1 = clsNumbers::readPositiveNumber("\nEnter a length of array? ");
    int arr1[100], arr2[100];
    short lengthArr2 = 0;
    clsNumbers::fillArrayWithRandomNumber(arr1, lengthArr1);
    cout << "\nArray 1 elements: " << endl;
    clsNumbers::printArray(arr1, lengthArr1);
    clsNumbers::copyPrimeNumberInArray(arr1, arr2, lengthArr1, lengthArr2);
    cout << "\nArray 2 elements after copy: " << endl;
    clsNumbers::printArray(arr2, lengthArr2);
}