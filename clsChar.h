#pragma once
#include <iostream>
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
};