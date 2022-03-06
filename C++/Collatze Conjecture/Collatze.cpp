#include <iostream>

using namespace std;

int main() {
    
    int n;
    int idx = 0;
    int max = 0;
    cout << "Masukan Angka" << endl;
    cin >> n;
    int c = n;
     for (int i = 0;i < n;i++){
        cout<<".";
        }
        cout<<" "<<n;
        if (n % 2 == 0){
        cout << " Genap" << endl;
    } else {cout << " Ganjil" << endl;}

while ( n != 1) {
       if (max <= n)
        {
            max = n;
        }
    if (n % 2 == 0) {
        n = n / 2;
        for (int i = 0;i < n;i++){
        cout<<".";
        }
        cout <<" "<< n <<" ";
        if (n % 2 == 0){
        cout << " Genap" << endl;
        } else {cout << " Ganjil" << endl;}           
    } else {
        n = n * 3 + 1;
        for (int i = 0;i < n;i++){
        cout<<".";
            }
        cout <<" "<< n <<" ";
        if (n % 2 == 0){
        cout << " Genap" << endl;
        } else {cout << " Ganjil" << endl;}   
        } idx++;
}
cout << endl << "Sequence " << idx+1 << endl;
cout << "Highest Number " << max << endl;
cout << endl << "Initializing Array" << endl;
int num[idx];
int array = 0;
num[array] = c;
cout << num[0] << " Sukses" << endl;

while (c != 1){
    array++;
    if (c % 2 == 0){
        c = c / 2;
    } else {
        c = c * 3 + 1;
    } num[array] = c;cout << num[array] << " Sukses" << endl;
} 

cout << endl << "Diagram" << endl << endl;
array = 0;
int horizon = 0;
int maxDot = max * (idx + 1);
int parameter = max;

for (int i = 0; i < maxDot; i++)
{
    horizon++;
    if (num[array] >= parameter){
    cout << "#";}
        else{
        cout << " ";}
        if (horizon == idx + 1)
        {
            cout << endl;horizon = 0;array = 0 - 1;parameter--;
        }    
    array++;
}

for (int i = 0; i < idx; i++)
{
    cout << " " << num[i] << "  ";
    
}
cout << endl << "Total Pixel " << maxDot << " Show" << endl;
cout << endl;

system("pause");
}