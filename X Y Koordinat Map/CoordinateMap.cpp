#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x ;
    cout << "Input Map size : ";cin >> x;
    if (x % 2 == 0)
    {
        x++;
    }
    
    int y = x,idx = x*y,idxxy = 0,horizon = 0,xvalue,yvalue,originx,originy;
    int num[2][idx];
    originx = 0-x+(x/2)+1;xvalue = originx; num[0][0] = xvalue;
    originy = y/2;yvalue = originy; num[1][0] = yvalue;

    cout << endl << "--Initiating Multidimensional Array--" << endl << endl;
    cout << "First X Value : " << num[0][0] << " Y Value : " << num[1][0] << " (" << num[0][0] << "," << num[1][0] << ")" << endl << endl;
    
    int inputx,inputy;
    
    cout << "Input Value X = ";cin >> inputx;cout << "Input Value Y = ";cin >> inputy;cout << endl;


    
    
    for (int i = 0; i < x*y; i++)
    {
        num[0][i] = xvalue++;num[1][i] = yvalue;
        
        if (num[0][i]==inputx&&num[1][i]==inputy) 
        {
            cout << " # ";
        } else 
            {
                if (num[0][i]==0&&num[1][i]==0)
                {
                    cout << " * ";
                }
                else 
                {
                if (num[0][i] >= originx && num[1][i] == 0)
                {   
                cout << "---";  
                } else
                    {
                        if (num[1][i] <= originy && num[0][i] == 0)
                        {    
                            cout << " | ";
                        } else 
                        {
                            cout << " . ";
                        }   
                    }
                }   
            }
        horizon++;
        if (horizon == x)
        {
            cout << endl;horizon = 0;num[1][i+1] = yvalue--;xvalue = originx;
        }
    }
    if (num[0][0] <= inputx && num[0][x*y-1] >= inputx && num[1][0] >= inputy && num[1][x*y-1] <= inputy)
    {
        cout << endl << "Value Detected" << endl;
    } else
    {
        cout << endl << "Value out of Range" << endl;
    }
   
    cout << endl <<"End X Value : " << num[0][x*y-1] << " Y Value : " << num[1][x*y-1] << " (" << num[0][x*y-1] << "," << num[1][x*y-1] << ")" << endl;
    system("pause");
}
