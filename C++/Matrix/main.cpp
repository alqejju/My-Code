#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int column,row,parameter = 0,parameterEnd = 0;
    cout << "Input your Matrix A row size : ";cin >> row; cout << "Input your Matrix A column size : ";cin >> column;
    int number[column][row];

    cout << endl << "Matrix A = " << endl;
    for (int a = 0; a < column; a++)
    {
        for (int b = 0; b < row; b++)
        {
            cout << "[ "; cin >> setw(3) >> right >> number[a][b];system("CLS");
            parameter++;
            for (int c = 0; c < column; c++)
            {
                for (int d = 0; d < row; d++)
                {
                    cout << "[";cout << setw(3) << right << number[c][d] << "]";parameterEnd++;
                    if (d == row-1)
                        {
                            cout << endl;
                        }
                    if (parameter == parameterEnd)
                        {
                            break;
                        }
                }
                if (parameterEnd == parameter)
                    {
                        break;
                    }
            }parameterEnd = 0; 
        } 
    }

    return 0;
}
