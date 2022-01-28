#include <iostream>
#include <bitset>

using namespace std;
int main(int argc, char const *argv[])
{
    int value = 1,parameter = value;
    for (int i = 0; i < 29; i++)
    {
        if (value < 15)
        {
            cout << bitset<4>(value) << endl;value++;parameter++; 
        }
        else
        {
            cout << bitset<4>(parameter) << endl;parameter--; 
        }   
        
    }
    
    cout << endl << "Git Test";
    return 0;
}
