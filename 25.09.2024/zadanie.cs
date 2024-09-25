using System;
using System.Numerics;
namespace program;

class Program
{
    public static void Main(string[] arg)
    {
        // zad 1
            Console.WriteLine("Zad1");
        Console.WriteLine("Witaj, świecie");

        // zad 2
            Console.WriteLine("Zad2");
        Console.WriteLine("Podaj imie: ");
        string Imie = Console.ReadLine();
        Console.WriteLine("Czesc " + Imie);

        // zad 3
            Console.WriteLine("Zad3");
        Console.WriteLine("Podaj liczbe");
        string liczba1 = Console.ReadLine();
        Console.WriteLine("Podaj drugą liczbe");
        string liczba2 = Console.ReadLine();

        int liczba1con = Convert.ToInt32(liczba1);
        int liczba2con = Convert.ToInt32(liczba2);

        int suma = liczba1con + liczba2con;
        Console.WriteLine("Suma tych liczb to " + suma);

        //zad 4
            Console.WriteLine("Zad4");
        Console.WriteLine("Podaj promień koła");
        double promien = Convert.ToDouble(Console.ReadLine());
        double pi = Math.PI;
        double pole = pi * (promien * promien);
        Console.WriteLine("Pole koła wynosi " + pole);

        //zad 5
            Console.WriteLine("Zad5");
        Console.WriteLine("Podaj stopnie ○C");
        double Cel = Convert.ToDouble(Console.ReadLine());
        double Far = (Cel * 9 / 5) + 32;
        Console.WriteLine("Temperatura w farenhajtach to " + Far);

        //zad 6
            Console.WriteLine("Zad6");
        Console.WriteLine("Podaj liczbe");
        int liczba = Convert.ToInt32(Console.ReadLine());
        string liczbaCon = Convert.ToString(liczba);
        Console.WriteLine(liczbaCon);

        //zad 7
            Console.WriteLine("Zad7");
        Console.WriteLine("Podaj liczbe");
        double liczba3 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Podaj druga liczbe");
        double liczba4 = Convert.ToDouble(Console.ReadLine());
        double srednia1 = (liczba3 * liczba4) / 2;
        Console.WriteLine("Srednia wynosi " + srednia1);

        //zad 8
            Console.WriteLine("Zad8");
        Console.WriteLine("Podaj liczbe ");
        double liczba5 = Convert.ToDouble(Console.ReadLine());
        double kwadrat = liczba5 + liczba5;
        Console.WriteLine("Kwadrat wynosi: " + kwadrat);

        //zad 9
            Console.WriteLine("Zad9");
        Console.WriteLine("Podaj liczbe zmienno,");
        double liczbaZ = Convert.ToDouble(Console.ReadLine());
        int liczbaCon2 = Convert.ToInt32(liczbaZ);
        Console.WriteLine("Przekonwertowanie wynosi: " + liczbaCon2);
    }
}
