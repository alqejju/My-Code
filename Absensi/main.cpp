#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

int verLine(int a){
    for (int i = 0; i < a+2; i++)
    {
        cout << "#";
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int idx = 10;
    string name[idx] = {"Sutejo","Wagiman","Nur Kholis Muhaimin Iskandar","Hideo Kojima","Siti Zubaedah","Muhammad Mustofa Ali Said","Onno Center","Amira Muhammad","Takeshi Mitshuba","Jhon Thoha"};

    char present[1][idx],presentPrint[idx];
    int nim[idx],lineLength = 0;
    nim[0] = 21816001;
    cout << "y / n for present input" << endl; 

    for (int i = 0; i < idx; i++)
    {
        nim[i+1] = nim[i] + 1;
        do
        {
            cout << "Apakah " << name[i] << " Hadir hari ini ? "; cin >> present[0][i];system("CLS");

        } while (!(present[0][i] == 'y' || present[0][i] == 'n'));
        if (present[0][i] == 'y')
        {
            presentPrint[i] = '*';
        }
        else
        {
            presentPrint[i] = ' ';
        }
        if (lineLength < name[i].size())
        {
            lineLength = name[i].size();
        } 
    }
cout << endl << setw((lineLength+4)/2) << right << "==" << "Absensi Kelas" << setw((lineLength+4)/2) << left << "==" << endl;
    verLine(lineLength+16);
    for (int i = 0; i < idx; i++)
    {
       cout << endl << "# " << setw(10) << left << nim[i] << setw(lineLength) << left << name[i] << " | " << presentPrint[i] << " #";
    }
    cout << endl;
    verLine(lineLength+16);
    return 0;
}
