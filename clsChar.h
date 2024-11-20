#pragma once
#include <iostream>
#include "C:\Users\YOUSAFDAHI\OneDrive - IMAM ABDULRAHMAN BIN FAISAL UNIVERSITY\Desktop\C++\Level Tow problem solving and alogrithm\Solve Problem With OOP/clsNumbers.h"
using namespace std;

class clsChar
{
public:
    static char readChar(string message = "Enter a character? ")
    {
        char c;
        cout << message << endl;
        cin >> c;
        return c;
    }
    static void printInvertedPatternLetter(short num)
    {
        for (short i = 65 + num - 1; i >= 65; i--)
        {
            cout << endl;
            for (short j = 65; j <= i; j++)
            {
                cout << char(i);
            }
        }
    }
    static void printPatternLetter(short num)
    {
        for (short i = 65; i < 65 + num; i++)
        {
            cout << endl;
            for (short j = 65; j <= i; j++)
            {
                cout << char(i);
            }
        }
    }
    static void printAllWordsFromAAAToZZZ()
    {
        string word = "";
        for (short i = 65; i <= 90;i++)
        {
            for (short j = 65; j <= 90;j++)
            {
                for (short k = 65; k <= 90;k++)
                {
                    word +=char(i);
                    word += char(j);
                    word += char(k);
                    cout << word << endl;
                    word = "";
                }

            }
                        cout << endl;

        }

    }
    static void guessPassword(string password)
    {
     string word = "";
     short counterTrial = 0;
     for (short i = 65; i <= 90; i++)
     {
         for (short j = 65; j <= 90; j++)
         {
             for (short k = 65; k <= 90; k++)
             {
                 counterTrial++;
                 word += char(i);
                 word += char(j);
                 word += char(k);
                 cout <<"Trial[" << (counterTrial) << "]: " << word << endl;
                 if (word == password)
                 {
                     cout << "\nPassword is: " << word;
                     printf("\nFound after %d trial(s)", counterTrial);
                     return;
                 }
                 word = "";
             }
         }
         cout << endl;

        }
        cout << "\nNOT Found";
    }
    enum enCharType
    {
        samallLetter = 1,
        capitalLetter = 2,
        specialCharacter = 3,
        digit = 4
    };
    static char GetRandomCharacter(enCharType charType)
    {
        switch (charType)
        {
        case enCharType::samallLetter:
        return char(clsNumbers::getRandomNumber(97, 122));
            break;
        case enCharType::capitalLetter:
        return char(clsNumbers::getRandomNumber(65, 90));
        break;
        case enCharType::specialCharacter:
            return char(clsNumbers::getRandomNumber(33, 47));
            break;
        case enCharType::digit:
            return char(clsNumbers::getRandomNumber(48, 57));
            break;
        default:
            break;
        }
    }
};