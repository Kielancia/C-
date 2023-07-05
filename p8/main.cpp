/*
    A simple and very old method of sending secret messages is the substitution cipher.
    You might have used this cipher with your friends when you were a kid.
    Basically, each letter of the alphabet gets replaced by another letter of alphabet.
    For example, every 'a' get replaced with an 'X', and very 'b' gets replaced with a 'Z', etc.

    Write a program thats ask a user to enter a secret message.

    Encrypt this message using the substitution cipher and display the encrypted message.
    Then decrypted the encrypted message back to the original message.

    You may use the 2 strings below for your substitution.
    For example, to encrypt you can replace the character at position n in alphabet
    with the character at position n in key.

    To decrypt you can replace the character at position n in key
    with the character in position n in alphabet.

    Have fun! And make the cipher stronger if you wish!
    Currently the cipher only substitutes letters - you could easily add digits, punctuations, whitespace and so
    forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
    This could also be improved.

    Remember, the less code you write the less code you have to test!
    Reuse existing functionality in libraries and in the std:string class!
*/

#include <iostream>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; //alphabet sequence
    string key {"XYZNLWEBGJHQDVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"}; //unique sequence

    cout << "Please, give a sentence to code: ";
    string userSentence {};
    string codeWithKey {};

    getline(cin, userSentence); //read entire line given by user

    cout << "Code sentence is: ";
    for(size_t i=0; i<userSentence.length(); i++) //loop for finding a char given by user in alphabet and changing it for its substitute in key
    {
        if(userSentence.at(i)!= ' ') //checking if a char in sequence is not the whitespace
        {
            cout << key.at(alphabet.find(userSentence.at(i))); //returning a char in key which is at the same position as a char in alphabet
        }
        else
            cout << " ";
    }

    cout << endl;
    cout << "Decode sentence is: " << userSentence << endl;

    return 0;
}
