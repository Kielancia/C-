/*
    Napisz program rozmieniaj¹cy podan¹ przez u¿ytkownika liczbê centów
    w postaci liczby ca³kowitej, na wiêksze wartoœci. Sprawdź czy
    podana przez u¿ytownika wartoœæ jest wiêksza od zera.
    In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents
    1 penny is 1 cents.

    Przykładowy program:
    u¿ytkownik podaje 92 centy

    Program powinien wyrzuciæ:
    You can provide this change as follows:
    dollars: 0
    quarters: 3
    dimes: 1
    nickels: 1
    pennies: 2
*/

#include <iostream>

using namespace std;

int main()
{
    int liczbaPieniedzy{0};
    cout << "Wprowadz liczbe pieniedzy w centach: " << endl;
    cin >> liczbaPieniedzy; //pobieramy kwotę, w centach, od użytkownika

    cout << "Mozesz rozmienic ta kwote na: " << endl;
    cout << "dollars: " << liczbaPieniedzy/100 << endl; //sprawdzamy ile razy 100 centów występuje w danej kwocie

    int reszta{0};
    reszta = liczbaPieniedzy%100; //Obliczamy jaka jest reszta z dzielenia podanej przez użytkownika liczby przez 100
    cout << "quarters: " << reszta/25 << endl; //sprawdzamy ile razy w pozostałej kwocie mieści się 25

    reszta = reszta%25; //reszta z dzielenia pozostałej kwoty przrz 25
    cout << "dimes: " << reszta/10 << endl; //sprawdzamy ile razy w pozostałej kwocie mieści się 10

    reszta = reszta%10; //reszta z dzielenia pozostałej kwoty przez 10
    cout << "nickels: " << reszta/5 << endl; //sprawdzamy ile razy w pozostałej kwocie mieści się 5

    reszta = reszta%5; //reszta z dzielenia pozostałej kwoty przez 5
    cout << "pennies: " << reszta << endl; //pozostała kwota, czyli pojedyncze centy

    return 0;
}
