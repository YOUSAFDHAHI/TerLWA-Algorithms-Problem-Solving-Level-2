#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsChar.h"
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsString.h"
using namespace std;
int main()
{
    string password = clsString::readString("\nPlease enter a 3-Letters Password (All Capital)? ");
    (clsChar::guessPassword(password));
}