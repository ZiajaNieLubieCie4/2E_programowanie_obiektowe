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
   if(x == y || x == z || y == z)
      cout << " Dwie liczny sa identyczne";
   else
      cout << " Zadna liczba nie jest identyczna";
 }