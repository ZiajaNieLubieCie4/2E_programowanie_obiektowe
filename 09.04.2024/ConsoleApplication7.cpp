/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char zdanie[100];

	fstream plik1("plik.txt", ios::in | ios::out | ios::trunc);
	cout << "Podaj tekst:" << endl;
	cin.getline(zdanie, 100, '\n');
	plik1 << zdanie;
	plik1.close();

	system("PAUSE");
	EXIT_SUCCESS;
}
*/
/*
#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream plik("plik.txt");
	if (plik.is_open()) {
		string linia, zawartosc;
		char znak;

		while (!plik.eof()) {
			znak = plik.get();
			if (plik.good())
				cout << znak << endl;
		}
	}
	else {
		cout << "Nie mozna otworzyc pliku." << endl;
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}
*/
/*
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream plik("plik.txt");
	char tekst[10] = {};

	if (!plik) cout << "Blad odczytu pliku.";
	else {
		plik.seekg(14);
		plik.read(tekst, 4);
	}
	plik.close();

	cout << tekst << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
*/
/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char tekst[100];
	fstream plik("plik.txt", ios::in | ios::out | ios::ate);
	plik.close();

	plik.open("plik.txt");
	while (!plik.eof()) {
		plik >> tekst;
		cout << tekst << endl;
	}
	plik.close();

	system("PAUSE");
	EXIT_SUCCESS;
}
*/
/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char tekst[100];
	fstream plik("plik.txt", ios::in | ios::out | ios::ate);
	plik.close();

	plik.open("plik.txt");
	while (!plik.eof()) {
		plik.getline(tekst, 100);
		cout << tekst << endl;
	}
	plik.close();

	system("PAUSE");
	EXIT_SUCCESS;
}
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream odczyt("test.txt");
		if (odczyt.is_open()) {
			string linia, zawartosc;
			while (getline(odczyt, linia)) {
				zawartosc += linia + "\n";
			}
			cout << zawartosc;
		}
		else {
			cout << "Nie mozna otworzyc pliku." << endl;
		}

	system("PAUSE");
	return EXIT_SUCCESS;
}
