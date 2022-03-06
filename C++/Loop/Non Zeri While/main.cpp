#include <iostream>

using namespace std;

double binToDec(double n)
{
    //Converting Binary number to Decimal
    int num = n,base = 1,temp = num,last_digit;
    double decimal = 0;

    while (temp) // Any non Zero Value is represented as True;
    {
        cout << "Temp : " << temp << endl;
        cout << "Decimal : " << decimal << endl;
        cout << "Base : " << base << endl;
        last_digit = temp % 10;
        temp = temp / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    return decimal;
}

int main(int argc, char const *argv[])
{
    
    cout << binToDec(10000);
   
    return 0;
}
