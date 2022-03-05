#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int x; 
    cout << "Input Circle size = ";cin >> x; cout << endl;

    if (x % 2 == 0){x = x + 1;} else {x = x;}
    int y = x,idx = x * y,angle = 0,midx = x/2,horizon = 0,originx = 0 - (x / 2) ,originy = y / 2,xvalue = originx ,yvalue = originy;
    int num[2][idx],r = x/2;
    float PI = 3.14159265359,xcircle,ycircle;

    cout << "Total Index = " << idx << endl;
    
    num[0][0] = xvalue ,num[1][0] = yvalue;

        for (int i = 0; i < idx; i++)
        {
            num[0][i] = xvalue++;num[1][i] = yvalue;
            
            /*cout << num[0][i] << "," << num[1][i] << " ";*/horizon++;
            if (horizon == x)
            {
                /*cout << endl;*/horizon = 0;yvalue--;xvalue = originx ;
            }   
        }
    cout << "First XY Value : (" << num [0][0] << "," << num[1][0] << ")"<< endl;
    cout << "Last XY Value : (" << num [0][idx-1] << "," << num[1][idx-1] << ")" << endl << endl;

    xcircle = r * sin(PI*2*angle/360),ycircle = r * cos(PI*2*angle/360);
    int intx = static_cast<int>(xcircle), inty = static_cast<int>(ycircle);
    

    //cout << "Radius : " << r << endl;
    
    for (int i = 0; i < 4; i++)
    {
        xcircle = r * sin(PI*2*angle/360),ycircle = r * cos(PI*2*angle/360);
        int intx = static_cast<int>(xcircle), inty = static_cast<int>(ycircle);
        cout << intx << "," << inty << endl;
        cout << angle << "*" << endl;angle += 90;
        
    }
    cout << endl;
    angle = 0;
    horizon = 0;

    for (int i = 0; i < x*y; i++)
    {
        for (angle ; angle < 360; angle++)
        {
            /* Mengevaluasi angle yg tepat pada sebuah titik koordinat */
            xcircle = r * sin(PI*2*angle/360),ycircle = r * cos(PI*2*angle/360);
            int intx = static_cast<int>(xcircle), inty = static_cast<int>(ycircle);
            if (num[0][i] == intx && num[1][i] == inty)
            {
                break;angle = angle;
            }
            
        }
        xcircle = r * sin(PI*2*angle/360),ycircle = r * cos(PI*2*angle/360);
        int intx = static_cast<int>(xcircle), inty = static_cast<int>(ycircle);
        if (num[0][i] == intx && num[1][i] == inty)
        {
            cout << " * ";
        } else
        {
            cout << " . ";
        }
        horizon++;angle = 0; 
        if (horizon == x)
        {
            cout << endl;horizon = 0;
        }  
    }
    cout << endl;
     
    system("pause");
}