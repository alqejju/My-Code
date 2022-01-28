#include <iostream>
#include <bitset>

using namespace std;
int main(int argc, char const *argv[])
{
    char letter;int bitLetter;
    cout << "Input your Text to Encrypt : ";cin >> letter;
    cout << bitset<8>(letter);
    return 0;
}
