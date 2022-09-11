#include <iostream>
#include<string>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
        if (Number <= 0)
        {
            cout << "\a";
        }
       
    } while (Number <= 0);
    

    return Number;
}
int CountDigitFrequncy(short DigitToCheck, int Number)
{

    int Remainder = 0, FrequencyCount = 0;
   
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FrequencyCount++;
        }

    }
    return FrequencyCount;
}
void PrintAllDigitFrequency(int Number)
{
    cout << endl;
    for (int i = 0;i < 10;i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequncy(i, Number);
        if (DigitFrequency > 0)
        {
            cout << "\nDigit "<<i<<" Frequency is " << DigitFrequency << " Time/s." << endl;

        }
    }
}
int main()
{
    int Number = ReadPositiveNumber("Enter Positive Number?");
    PrintAllDigitFrequency(Number);
    
}