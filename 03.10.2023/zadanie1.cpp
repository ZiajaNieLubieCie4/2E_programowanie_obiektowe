#include <iostream>
using namespace std;

int main() {
	int marka;

	cout << "Podaj numer od 1 do 30: ";
	cin >> marka;

	switch (marka) {
	case 1: 
		cout << "Wybrales marke: BMW" << endl;
		break;
	case 2:
		cout << "Wybrales marke: Audi" << endl;
		break;
	case 3:
		cout << "Wybrales marke: Lamborghini" << endl;
		break;
	case 4:
		cout << "Wybrales marke: Ferrari" << endl;
		break;
	case 5:
		cout << "Wybrales marke: Bugatti" << endl;
		break;
	case 6:
		cout << "Wybrales marke: Opel" << endl;
		break;
	case 7:
		cout << "Wybrales marke: Volkswagen" << endl;
		break;
	case 8:
		cout << "Wybrales marke: Chevrolet" << endl;
		break;
	case 9:
		cout << "Wybrales marke: Dodge" << endl;
		break;
	case 10:
		cout << "Wybrales marke: Fiat" << endl;
		break;
	case 11:
		cout << "Wybrales marke: Ford" << endl;
		break;
	case 12:
		cout << "Wybrales marke: Skoda" << endl;
		break;
	case 14:
		cout << "Wybrales marke: Mercedes" << endl;
		break;
	case 15:
		cout << "Wybrales marke: Hyundai" << endl;
		break;
	case 16:
		cout << "Wybrales marke: Zenvo" << endl;
		break;
	case 17:
		cout << "Wybrales marke: Mclaren" << endl;
		break;
	case 18:
		cout << "Wybrales marke: Honda" << endl;
		break;
	case 19:
		cout << "Wybrales marke: Dacia" << endl;
		break;
	case 20:
		cout << "Wybrales marke: Citroen" << endl;
		break;
	case 21:
		cout << "Wybrales marke: Kia" << endl;
		break;
	case 22:
		cout << "Wybrales marke: Nissan" << endl;
		break;
	case 23:
		cout << "Wybrales marke: Peugot" << endl;
		break;
	case 24:
		cout << "Wybrales marke: Seat" << endl;
		break;
	case 25:
		cout << "Wybrales marke: Polonez" << endl;
		break;
	case 26:
		cout << "Wybrales marke: Renault" << endl;
		break;
	case 27:
		cout << "Wybrales marke: Volvo" << endl;
		break;
	case 28:
		cout << "Wybrales marke: Bentley" << endl;
		break;
	case 29:
		cout << "Wybrales marke: Range Rover" << endl;
		break;
	case 30:
		cout << "Wybrales marke: Rolls Royce" << endl;
		break;
	default:
		cout << "Bledny wybor. Wybierz numer od 1 do 30." << endl;
		break;
	}

	return 0;
}
