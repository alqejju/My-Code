#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

    srand((unsigned) time(NULL)); 

    // Using for loop
    for (int i = 0; i < 10; i++)
    {
        for(int x=0; x<10; x++){        

            // Offset 100 and range 201 to generate random numbers between 100 and 300

            int random = 1 + (rand() % 127);

            cout<<random<<"   ";

        }
        cout << endl;
    }
  
    return 1;
    
    
}