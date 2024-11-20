#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class clsNumbers
{
public:
    static short readPositiveNumber()
    {
        short num = 0;
        do
        {
            cout << "\nPlease enter a Positive Number: ";
            cin >> num;
        } while (num <= 0);
        return num;
    }
    enum enPrimeOrNot
    {
        Prime = 1,
        NotPrime = 2
    };
    static enPrimeOrNot checkPrimeOrNot(short num)
    {
        short halfOfNumber = num / 2;
        for (short i = 2; i <= halfOfNumber; i++)
        {
            if ((num % i == 0))
            {
                return enPrimeOrNot::NotPrime;
            }
        }
        return enPrimeOrNot::Prime;
    }
    static void printPrimeNumbersFrom1ToN(short num)
    {
        for (short i = 1; i <= num; i++)
        {
            if (checkPrimeOrNot(i) == enPrimeOrNot::Prime)
            {
                cout << i << endl;
            }
        }
    }
    enum enPerfectOrNot
    {
        Perfect = 1,
        NotPerfect = 2
    };

    static enPerfectOrNot checkPerfectOrNot(short num)
    {
        short halfOfNumber = num / 2;
        int sum = 0;
        for (short i = 1; i <= halfOfNumber; i++)
        {
            if (num % i == 0)
            {
                sum += i;
                if (sum == num && i == halfOfNumber)
                    return enPerfectOrNot::Perfect;
            }
        }
        return enPerfectOrNot::NotPerfect;
    }
    static void printPerfectNumber(short num)
    {
        if (checkPerfectOrNot(num) == enPerfectOrNot::Perfect)
            cout << "\nYES, this is Perfect Number";
        else
            cout << "\nNO, this is NOT Perfect Number";
    }
    static void printPerfectNumberFrom1ToN(short num)
    {
        for (short i = 0; i <= num; i++)
        {
            if (checkPerfectOrNot(i) == enPerfectOrNot::Perfect)
                cout << i << endl;
        }
    }
    static void printDigits(short num)
    {
        short reminder = 0;
        while (num > 0)
        {

            reminder = num % 10;
            cout << reminder << endl;
            num = num / 10;
        }
    }
    static short sumOfDigits(short num)
    {
        short reminder = 0;
        int sum = 0;
        while (num > 0)
        {

            reminder = num % 10;
            sum += reminder;
            num = num / 10;
        }
        return sum;
    }
};
