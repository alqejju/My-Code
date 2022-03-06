#include <iostream>

using namespace std;

int main() {

    srand((unsigned) time(NULL)); 

    int c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << char(c);
 return 0;
}