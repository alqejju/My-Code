#include <iostream>

using namespace std;


class Car
{
public:
    string name,model;
    int year;
};




int main(int argc, char const *argv[])
{
    int idx = 5;
    Car car[idx];
for (int i = 0; i < idx; i++)
{
    cout << "Input car Name : ";cin >> car[i].name;//cout << endl;
    cout << "Input car Model : ";cin >> car[i].model;cout << endl;
}
for (int i = 0; i < idx; i++)
{

    cout << car[i].name << endl;
    cout << car[i].model << endl;
}

    return 0;
}
