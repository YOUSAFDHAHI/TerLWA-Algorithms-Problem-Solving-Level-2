#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    cout << clsChar::GetRandomCharacter(clsChar::enCharType::samallLetter) << endl;
    cout << clsChar::GetRandomCharacter(clsChar::enCharType::capitalLetter) << endl;
    cout << clsChar::GetRandomCharacter(clsChar::enCharType::specialCharacter) << endl;
    cout << clsChar::GetRandomCharacter(clsChar::enCharType::digit) << endl;
}