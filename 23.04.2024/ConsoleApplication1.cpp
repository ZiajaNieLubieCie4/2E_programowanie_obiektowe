
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

string mieszajLitery(string PodaneSlowo);
int Zgadywanie(string WymieszaneSlowo, string PodaneSlowo, int punkty);
int Powtorka();
string LosujSlowoZPliku(string nazwaPliku);

int main()
{
    int punktacja = 0;

    do
    {
        string PodaneSlowo = LosujSlowoZPliku("C:\lista_slow.txt");

        string Wymieszane = mieszajLitery(PodaneSlowo);
        punktacja = Zgadywanie(Wymieszane, PodaneSlowo, punktacja);

    } while (Powtorka() == 1);

    cout << "Koniec gry. Twoja punktacja to: " << punktacja << endl;

    return 0;
}

string mieszajLitery(string PodaneSlowo)
{
    string WymieszaneSlowo;
    int pozycja(0);

    while (PodaneSlowo.size() != 0)
    {
        pozycja = rand() % PodaneSlowo.size();
        WymieszaneSlowo += PodaneSlowo[pozycja];
        PodaneSlowo.erase(pozycja, 1);
    }

    return WymieszaneSlowo;
}

int Zgadywanie(string WymieszaneSlowo, string PodaneSlowo, int punkty)
{
    string SlowoZgadywane;
    int i = 1;

    do
    {
        cout << "Podaj poprawne slowo: " << WymieszaneSlowo << endl;
        cin >> SlowoZgadywane;
        if (SlowoZgadywane == PodaneSlowo)
        {
            cout << "Zgadles\n";
            punkty += (5 - i); 
            break; 
        }
        else
        {
            cout << "Nie zgadles\n";
            i++;
            if (i > 5)
            {
                cout << "Za duzo prob, przegrales\n";
                break; 
            }
        }
    } while (true); 

    return punkty;
}

int Powtorka()
{
    char TN;
    cout << "Czy chcesz zagrac jeszcze raz: (t/n)   ";
    cin >> TN;
    if (TN == 't')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string LosujSlowoZPliku(string nazwaPliku)
{
    ifstream plik(nazwaPliku);
    vector<string> slowa;

    if (plik)
    {
        string slowo;
        while (plik >> slowo)
        {
            slowa.push_back(slowo);
        }
    }
    else
    {
        cout << "Nie mozna otworzyc pliku." << endl;
        exit(1);
    }

    srand(time(nullptr));
    int indeks = rand() % slowa.size();
    return slowa[indeks];
}