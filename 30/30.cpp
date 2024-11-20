#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsString.h"
using namespace std;
int main()
{
    srand((unsigned)time(NULL));

    short length = clsNumbers::readPositiveNumber("\nEnter a length of array? ");
    int arr1[100], arr2[100], arr3[100];

    clsNumbers::fillArrayWithRandomNumber(arr1, length);
    clsNumbers::fillArrayWithRandomNumber(arr2, length);

    cout << "\nArray 1 elements: " << endl;
    clsNumbers::printArray(arr1, length);

    cout << "\nArray 2 elements: " << endl;
    clsNumbers::printArray(arr2, length);
    clsNumbers::sumOf2Array(arr1, arr2, arr3, length);
    cout << "\nSum of tow array is: " << endl;
    clsNumbers::printArray(arr3, length);
}