#include <iostream> // If you didnt know this Header, you need to Open Google and Study :)
#include <cstdlib> // Header Precision Output // Stand for C Standart Library
#include <iomanip> // Header for Aligment text // Stand for Input Output Manipulator

using namespace std;
double bin(int n)
{
    // Binary Conversion
    int n1 = n,remainder = 1;
    double binInt = 0;
    
    if (n1 != 1)
    {
        while (n1 != 1)
        {
            n1 /= 2;remainder++;  
        }
    }
    short bit[remainder],parameter = remainder-1;n1 = n;
    for (int i = 0; i < remainder; i++)
    {
        if (n1%2 == 0)
        {
            bit[i] = 0;
        }
        else
        {
            bit[i] = 1;
        }
        n1 = n1/2;
    }
    parameter = remainder;
    // Inserting Int Array binary to single Variable
    for (int i = 0; i < remainder; i++)
    {
        if (bit[parameter - 1] == 1)
        {
             binInt = binInt + 1;
        }
        parameter--;binInt = binInt * 10; 
    }
    binInt = binInt / 10;
    return binInt;
}
double binToDec(double n)
{
    //Converting Binary number to Decimal
    int num = n,base = 1,temp = num,last_digit;
    double decimal = 0;

    while (temp) {
        last_digit = temp % 10;
        temp = temp / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    return decimal;
}
int main()
{
    double n; // Value
    short var;
    cout << right << setw(28) << "---Binary Conversion---" << endl;
    cout << "  Binary to Decimal Conversion 1"
    << endl << "  Decimal to Binary Conversion 2"
    << endl << "  Char to Binary Conversion " << right << setw(4) << " 3"
    << endl << "---Input '0' on Command to Exit---" << endl << endl;
    
    do
    {
        cout << "Input your Command"<< right << setw(6) << ": ";cin >> var;
        switch (var)
        {
            case 1:
                cout << "Input your Number" << right << setw(7) << ": "; cin >> n;
                cout << "Your Binary number is"<< right << setw(3) << ": ";
                cout.precision(0); // From cstd Library
                cout << fixed << bin(n) << endl;
                break;
            case 2:
                cout << "Input your Binary"<< right << setw(7) << ": "; cin >> n;
                cout << "Your Decimal number is"<< right << setw(2) << ": ";
                cout.precision(0); // From cstd Library
                cout << fixed << binToDec(n) << endl;
                break;

            case 3:
                char text[20];

                cout << "Input your Text"<< right << setw(9) << ": "; cin >> text;
                cout << "Your Binary text is"<< right << setw(5) << ": ";
                // Converting every Char array ASCII Value into Binary number with Function before
                for (int i = 0; i < 20; i++)
                {
                    if (text[i] == 0)
                    {
                        break;
                    }
                    cout.precision(0); // From cstd Library
                    cout << fixed << bin(text[i]) << " ";
                } cout << endl;
                break;
        }if (var > 3)
        {
            cout << "Input Unknown" << endl;
        }
        
    } while (var > 3);
    system("pause"); // This Function is for Pause on console when Program finish Executed.
    // AKU GAE GITHUB, SEWENGI KESIO SIO TIWAS SUE SUE UTEK UTEK
    return 0;
}