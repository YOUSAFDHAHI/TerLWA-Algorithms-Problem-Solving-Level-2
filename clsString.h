#pragma once
#include<iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
using namespace std;
class clsString
{
    public:
   static string readString(string Message = "Enter your string? ")
    {
        string S1 = "";
        cout << Message << endl;
        cin >> S1;
        return S1;
    }

    static string encryptionText(string & text,const short encryptionKey)
    {
        for (short i = 0; i < text.length();i++)
        {
            text[i] = char((int)text[i] + encryptionKey);        }
         return text;
        }
    static string decryptionText(string & text,const short encryptionKey)
    {
        for (short i = 0; i < text.length();i++)
        {
            text[i] = char((int)text[i] - encryptionKey);        }
        return text;
    }
    
};
