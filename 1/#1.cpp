#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class clsMultiplicationTable
{
public:
    void PrintTableHeader()
    {
        cout << "\n\n"
             << spaces(3) << "Multiplication Table From 1 to 10" << endl;
        cout << "\n";
        for (short i = 1; i <= 10; i++)
        {
            cout << spaces(1) << i;
        }
        cout << "\n"
             << Sperater(82, "-");
    }
    string Sperater(short numberOfSperater, string Sperater)
    {
        string S1 = "";
        for (short i = 0; i < numberOfSperater; i++)
        {
            S1 += Sperater;
        }
        return S1;
    }
    string spaces(short numberOfSpace)
    {
        string S1 = "";
        for (short i = 0; i < numberOfSpace; i++)
        {
            S1 += "\t";
        }
        return S1;
    }
    void Table()
    {
        cout << "\n";
        for (short i = 1; i <= 10; i++)
        {
            (i == 10) ? cout << " " << i << "  |" << spaces(1)
                      : cout << " " << i << "   |" << spaces(1);
            for (short j = 1; j <= 10; j++)
            {
                cout << i * j << spaces(1);
            }
            cout << endl;
        }
    }
};

int main()
{
    clsMultiplicationTable Table;
    Table.PrintTableHeader();
    Table.Table();
}