/*
    Your challenge for section 11 is to modularize your solution
    to the Section 9 challenge by refactoring your solution so that
    it uses uses functions.

    You decide how to modularize the program.
    You can use my solution which is included in this file, or modularize
    your solution.

    Here are a few hints:
    - Create functions for each major function
    - Keep the functions small
    - Remember the Boss/Worker analogy
    - Keep the vector declaration in the main function
    and pass the vector object to any function that requires it

    DO NOT move the vector object outside main and make it a global variable.

    - You can start by defining a function that displays the menu
    - You can then define a function that reads the selection from the user
    and returns it in uppercase
    - Create functions for each menu option
    - Create functions that display the list of numbers, calculates
    the mean and so forth

    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks
    the first time, you can do it!

    Finally, don't forget to use function prototypes!

    Good luck!

    This challenge is about using a collection (list) of integers and allow the user to select
    option from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit
    Enter your choice:

    The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
    If an illegal choice is made, you should display "Unknown selection, please try again" and the menu options
    should be displayed again.

    If the user enters 'P' or 'p', you should display "[] - the list is empty"
    If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
    For example [ 1 2 3 4 5 ]

    If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
    which you will add to the list and then display it was added. For example, if the user enters 5
    You should display "5 added".
    Duplicate list entries are OK.

    If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
    If the list is empty you should display "Unable to calculate the mean - no data"

    If the user enters 'S' or 's' you should display the smallest element in the list.
    For example, if the list contains [ 2 4 5 1 ], you should display "The smallest number is 1"
    If the list is empty you should display "Unable do determine the smallest number - list is empty"

    If the user enters 'L' or 'l' you should display the largest element in the list.
    For example, if the list contains [ 2 4 5 1 ], you should display "The largest number is  5"
    If the list is empty you should display "Unable to determine the largest number - list is empty"

    If the user enters 'Q' or 'q' then you should display "Goodbye" and the program should terminate.

    Hint: Use a vector!


    Additional functionality if you wish to extend this program.
    - search for a number in the list and if found display the number of times it occurs in the list
    - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
    - don't allow duplicate entries
    - come up with your own ideas
*/

#include <iostream>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

void menuList();
char upperCase(char);

using namespace std;

int main()
{
    char wyborUzytkownika;
    int liczbaUzytkownika{};
    vector <int> data {};

    do
    {
        menuList();
        cin >> wyborUzytkownika;
        upperCase(wyborUzytkownika);

        switch(wyborUzytkownika) //funkcja sprawdzaj¹ca wybór u¿ytkownika
         {
            //wypisywanie zawartoœci wektora tworzonego przez u¿ytkownika
            case 'P':
            {
                if(data.size() > 0)
                {
                    cout << "[ ";
                    for(int i=0;i<data.size();i++)
                        cout << data.at(i) << " ";
                    cout << "]" << endl << endl;
                }
                else
                    cout << "[] - the list is empty" << endl << endl;
                break;
            }
            case 'a': //dopisywanie do wektora wartoœci podanych przez u¿ytkownika
            case 'A':
            {
                cout << "Enter an integer to add to the list: ";
                cin >> liczbaUzytkownika;
                data.push_back(liczbaUzytkownika);
                cout << liczbaUzytkownika << " was added" << endl << endl;
                break;
            }
            case 'm': //obliczanie œredniej arytmetycznej podanych liczb w wektorze utworznym przez u¿ytkownika
            case 'M':
            {
                if(data.size() > 0)
                {
                    double srednia{0};
                    int licznik{0};
                    for(int i=0;i<data.size();i++)
                    {
                        srednia+=data.at(i);
                        licznik++;
                    }
                    srednia=srednia/licznik;
                    cout << "The mean is: " << srednia << endl << endl;
                }
                else
                    cout << "Unable to calculate the mean - no data" << endl << endl;
                break;
            }
            case 's': //Sprawdzanie, która z liczb, podanych przez u¿ytkownika, w wektorze jest najmniejsza
            case 'S':
            {
                if(data.size() > 0)
                {
                    int najmniejsza=data.at(0);
                    for(int i=1;i<data.size();i++)
                    {
                        if(najmniejsza>data.at(i))
                            najmniejsza=data.at(i);
                    }
                    cout << "The smallest number is: " << najmniejsza << endl << endl;
                }
                else
                    cout << "Unable do determine the smallest number - list is empty" << endl << endl;
                break;
            }
            case 'l': //Sprawdzanie, która z liczb, podanych przez u¿ytkownika, w wektorze jest najwiêksza
            case 'L':
            {
                if(data.size() > 0)
                {
                    int najwieksza=data.at(0);
                    for(int i=1;i<data.size();i++)
                    {
                        if(najwieksza<data.at(i))
                            najwieksza=data.at(i);
                    }
                    cout << "The largest number is: " << najwieksza << endl << endl;
                }
                else
                    cout << "Unable to determine the largest number - list is empty" << endl << endl;
                break;
            }
            case 'q':  //warunek koñca programu
            case 'Q':
            {
                cout << "Goodbye..." << endl << endl;
                break;
            }

            default: //komunikat pojawiaj¹cy siê jeœli u¿ytkownik nie poda³ ¿adnej, z mo¿liwych do wyboru, opcji
                cout << "Unknown selection, please try again" << endl << endl;
        }

    }
    while(wyborUzytkownika != 'q' && wyborUzytkownika !='Q');

    return 0;
}

void menuList() {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
        cout << "Enter your choice: ";
}
char upperCase(char wyborUzytkownika) {
    return (char)toupper(wyborUzytkownika);
}
