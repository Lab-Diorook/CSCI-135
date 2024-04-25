/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6B

[description]
.
.
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

char shiftChar(char c, int rshift){
    if (islower(c)  ){ // Belongs to CC type header, checks if character is lowercase or not
        return (c - 'a' + rshift) % 26 + 'a'; // 26 is the number of letters in the English alphabet
    }

    if(isupper(c) ){        // check if uppercase
        return (c -'A' + rshift) % 26 + 'A';
    }
    //For everything else
    return c;
}

string encryptCaesar(string plaintext, int rshift){
    string message;
    for (int i = 0; i < plaintext.size(); i ++){    //create new message
        message += shiftChar(plaintext[i],rshift);
    }
    return message; 
}

int main()
{
    int shift; 
    string input;

    cout << "Please enter a line: " << endl;
    getline(cin, input);
    cout << "Enter shift amount: " << endl;
    cin >> shift;
    cout <<"Ciphertext: " << encryptCaesar(input,shift) << endl;

}
