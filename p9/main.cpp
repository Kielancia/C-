/*
    Piramida literowa
    przyklad:
    "ABC" ->
            A
        A   B   A
    A   B   C   B   A
    1, 3, 5, 7, ...
    1, 2, 3, ...
    1. petla spacji - spacji tyle jaka jest długosc ciągu wyrazowego
    podanego przez uzytkownika
    2. petla wyrzucająca litery w dobrej kolejnosci
    3. petla wyrzucajaca litery od tylu (dodatkowa zmienna)

*/

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    string ciagZnakow;
    cout << "Podaj ciag: ";
    cin >> ciagZnakow;
    int dlugoscCiagu = ciagZnakow.length();

    for(int j=0;j<ciagZnakow.length();j++) //main loop
    {
        for(int i=dlugoscCiagu;i>1;i--) //loop for spaces
        {
            cout << " ";
        }
        for(int k=0;k<=j;k++) //loop for letters from left to right
            cout << ciagZnakow.at(k);

        for(int l=j-1;l>=0;l--) //loop for letters from right to left
            cout << ciagZnakow.at(l);

        cout << endl;
        dlugoscCiagu--;
    }

    return 0;
}
