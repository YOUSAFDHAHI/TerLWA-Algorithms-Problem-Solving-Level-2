#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class clsNumbers
{
public:
    static int readPositiveNumber(string message = "\nPlease enter a Positive Number: ")
    {
        int num = 0;
        do
        {
            cout << message;
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
    static int reverseNumber(int num1)
    {
        short reminder = 0;
        short num2 = 0;

        while (num1 > 0)
        {
            reminder = num1 % 10;
            num1 = num1 / 10;
            num2 = num2 * 10 + reminder;
        }
        return num2;
    }
    static short countDigitFrequency(int num, short digitToCheck)
    {
        short reminder = 0;
        short freqCount = 0;
        while (num > 0)
        {

            reminder = num % 10;
            if (reminder == digitToCheck)
                freqCount++;
            num = num / 10;
        }
        return freqCount;
    }
    static void printAllDigitFrequency(int num)
    {
        for (short i = 1; i <= 10; i++)
        {
            if (countDigitFrequency(num, i) > 0)
                cout << "Digit " << i << " Frequency is " << countDigitFrequency(num, i)
                     << " Time(s)" << endl;
        }
    }
    static void printAllDigitInOrder(int num)
    {
        num = reverseNumber(num);
        printDigits(num);
    }
    static bool isPalindromeNumber(int num)
    {
        return (num == reverseNumber(num));
    }
    static void printInvertedNumberPattern(int num)
    {
        for (short i = num; i >= 1; i--)
        {
            cout << endl;
            for (short j = 1; j <= i; j++)
            {
                cout << i;
            }
        }
    }
    static void printNumberPattern(int num)
    {
        for (short i = 1; i <= num; i++)
        {
            cout << endl;
            for (short j = 1; j <= i; j++)
            {
                cout << i;
            }
        }
    }

    static short getRandomNumber(short from, short to)
    {
        int randNum = rand() % (to - from + 1) + from;
        return randNum;
    }
    static short readArray(int arr[100], short length)
    {
        cout << "\nEnter array elements: " << endl;
        for (short i = 0; i < length; i++)
        {
            cout << "\nElements [" << i + 1 << "]: ";
            cin >> arr[i];
        }
        return arr[100];
    }
    static void printArray(int arr[100], short length)
    {
        // cout << "\nOriginal array: ";
        for (short i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    static short countFrequencyNumberInArray(int arr[100], short length, short digitToCheck)
    {
        short counter = 0;
        for (short i = 0; i < length; i++)
        {
            counter += countDigitFrequency(arr[i], digitToCheck);
        }
        return counter;
    }
    static void fillArrayWithRandomNumber(int arr[100], short length)
    {
        for (short i = 0; i < length; i++)
        {
            arr[i] = getRandomNumber(1, 100);
        }
    }
    static short maxNumberInArray(int arr[100], short length)
    {
        short max = 0;
        for (short i = 0; i < length; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
    static short minNumberInArray(int arr[100], short length)
    {
        short min = 100;
        for (short i = 1; i < length; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }
};
