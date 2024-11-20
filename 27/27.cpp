#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsString.h"
using namespace std;
int main()
{
    srand((unsigned)time(NULL));

    short length = clsNumbers::readPositiveNumber("\nEnter a length of array? ");
    int arr[100];
    clsNumbers::fillArrayWithRandomNumber(arr, length);
    clsNumbers::printArray(arr, length);
    cout << "Avg of array is: " << clsNumbers::avgOfArray(arr, length);
}