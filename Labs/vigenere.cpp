/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6C

[description]
.
.
*/

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

char shiftChar(char c, char rshift){    // shift each letter
    if (isalpha(c)){
        if ((int)c <= 90){
            rshift = rshift - 'a';
            char x = (c - 'A' + rshift) % 26 + 'A';     //capital
            return x;
        }
        else if  ((int)c > 90){
            rshift = rshift - 'a';
            char x = (c - 'a' + rshift) % 26 + 'a';     //lower
            return x;
        }
    }
    return c;
}

string encryptVigenere(string plaintext, string keyword){
    string v;
    int z = 0;
    char x;
    
    for (int i = 0; i < plaintext.size();i++){              
        if (isalpha(plaintext[i])){
            x = shiftChar(plaintext[i],keyword[z]);     //add by letter shift
            v = v + x;
            z = (z + 1) % keyword.size();
        }
        else{
            x = shiftChar(plaintext[i],keyword[z]);
            v = v+x;
        }
        
    }
    return v;
}

int main(){
    string s;
    getline(cin, s);
    string keyword;
    
    cout << "Enter the shift: ";
    cin >> keyword;
    
    string x = encryptVigenere(s,keyword);
    
    cout << x;
}
