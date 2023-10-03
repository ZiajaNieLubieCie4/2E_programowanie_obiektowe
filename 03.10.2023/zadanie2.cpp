#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int wybor;

	cout << "Wybierz figure, dla ktorej chcesz obliczyc pole:" << endl;
	cout << "1. Kwadrat" << endl;
	cout << "2. Trapez" << endl;
	cout << "3. Romb" << endl;
	cout << "4. Trojkat" << endl;
	cin >> wybor;

	double pole;

	switch (wybor) {
	case 1: // kwadrat
		double bokkwadratu;
		cout << "Podaj dlugosc boku kwadratu: ";
		cin >> bokkwadratu;
		pole = bokkwadratu * bokkwadratu;
		break;
	case 2: //trapez
		double a, b, h;
		cout << "Podaj dlugosc krotszej podstawy trapezu: ";
		cin >> a;
		cout << "Podaj dlugosc dłuzszej podstawy trapezu: ";
		cin >> b;
		cout << "Podaj wysokosc trapezu: ";
		cin >> h;
		pole = (a + b) * h / 2;
		break;
	case 3: //romb
		double przekatna1, przekatna2;
		cout << "Podaj dlugosc pierwszej przekatnej rombu: ";
		cin >> przekatna1;
		cout << "Podaj dlugosc drugiej przekatnej rombu: ";
		cin >> przekatna2;
		pole = (przekatna1 * przekatna2) / 2;
		break;
	case 4: //Trojkat
		double podstawa, wysokosc;
		cout << "Podaj dlugosc podstawy trojkata: ";
		cin >> podstawa;
		cout << "Podaj wysokosc trojkata: ";
		cin >> wysokosc;
		pole = (podstawa * wysokosc) / 2;
		break;
	default:
		cout << "Bledny wybor figury." << endl;

		return 1;
	}
	cout << "Pole wybranej figury wynosi: " << pole << endl;

	return 0;

}