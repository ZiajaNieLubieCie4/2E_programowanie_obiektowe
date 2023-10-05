#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Podaj liczbe: ";
    cin >> x;
    if(x % 2)
        cout << "Liczba " << x << " nie jest przysta";
    else
        cout << "Liczba " << x << " jest parzysta";
}
