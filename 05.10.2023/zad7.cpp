#include <iostream>
using namespace std;

int main() {
   int x, y, z;
   cout << "Wprowadz pierwsza liczbe: ";
   cin >> x;
   cout << "Wprowadz druga liczbe: ";
   cin >> y;
   cout << "Wprowadz trzecia liczbe: ";
   cin >> z;
   if(x < y && x < x) 
       cout << x << " jest najmniejsze";
    else if(y < x && y < z)
        cout << y << " jest najmniejsze";
    else if(z < y && z < x)
        cout << z << " jest najmniejsze";
    else
        cout << "liczby sa takie same";
 }
