#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char myMassage[30];
    int key[30],encrypted[30],decrypted[30];

    cout << "Input your Massage : " ;cin >> myMassage;
    cout << "Your ASCII Value   : ";

    srand((unsigned) time(NULL));

    int random;

    //Initiating ASCII Value
    for (int i = 0; i < 30; i++)
        {
            if (int (myMassage[i]==0))
            {
                break;
            }
            else
            {
                cout << int (myMassage[i]) << " ";
            }
        }
    
    //Initiating CODEC
    for (int i = 0; i < 30; i++)
        {
            encrypted[i] = 32 + (rand() % 127);
            key[i] = encrypted[i] + int(myMassage[i]);
            decrypted[i] = key[i] - encrypted[i] ;
        }

    cout << endl << "Your Key : ";    
    for (int i = 0; i < 30; i++)
        {
            cout << char(key[i]);
        }  

    cout << endl << endl << "Encrypted : ";

    for (int i = 0; i < 30; i++)
        {
            cout << char(encrypted[i]);
        }
    
    cout << endl << "Decrypted : ";
    for (int i = 0; i < 30; i++)
        {
            if (int (decrypted[i]==0))
            {
                break;
            }
            else
            {
                cout << char(decrypted[i]);
            }
        }  
    return 0;
}
