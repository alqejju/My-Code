#include <iostream>
#include <iomanip>

using namespace std;

int matrixAB(int columnA,int rowA,int columnB,int rowB)
{
    int column = columnA,row = rowA,parameter = 0,parameterEnd = 0;
    int numberA[column][row];

    cout << "A :" << endl;
    for (int a = 0; a < column; a++)
    {
        for (int b = 0; b < row; b++)
        {
            cout << "[  "; cin >> setw(3) >> right >> numberA[a][b];system("CLS");
            cout << "A :" << endl;
            parameter++;
            for (int c = 0; c < column; c++)
            {
                for (int d = 0; d < row; d++)
                {
                    cout << "[";cout << setw(3) << right << numberA[c][d] << "]";parameterEnd++;
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

    column = columnB,row = rowB,parameter = 0,parameterEnd = 0;
    int numberB[column][row];

    cout << "B :" << endl;
    for (int a = 0; a < column; a++)
    {
        for (int b = 0; b < row; b++)
        {
            cout << "[  "; cin >> setw(3) >> right >> numberB[a][b];system("CLS");
            cout << "B :" << endl;
            parameter++;
            for (int c = 0; c < column; c++)
            {
                for (int d = 0; d < row; d++)
                {
                    cout << "[";cout << setw(3) << right << numberB[c][d] << "]";parameterEnd++;
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
    if (rowA == columnB)
    {
        for (int i = 0; i < columnA; i++)
        {
            for (int j = 0; j < rowA; j++)
            {
                /* code */
            }
            
        }
        
    } else {
        cout << endl << "your Matrix is invalid for Multiplication Operator";
    }
    
    return 0;
};

int main()
{
    int columnA,rowA,columnB,rowB;
    cout << "Input your Matrix A row size : ";cin >> rowA; cout << "Input your Matrix A column size : ";cin >> columnA;
    cout << "Input your Matrix B row size : ";cin >> rowB; cout << "Input your Matrix B column size : ";cin >> columnB;system("CLS");
    matrixAB(columnA,rowA,columnB,rowB);
    return 0;
}
