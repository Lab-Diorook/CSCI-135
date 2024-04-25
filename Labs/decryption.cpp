/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6D

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

char shiftChar(char c, int rshift){             //shift character
    if(c >= 'a' && c <= 'z'){
        c = c - rshift;
        if(c < 'a'){
			c = c + 'z' - 'a' + 1;
		}
		return c;
	}
	else if(c >= 'A' && c <= 'Z'){
		c = c - rshift;
			
		if(c < 'A'){
			c = c + 'Z' - 'A' + 1;
		}
		return c;
	}
    return c;
}

string decryptCaesar(string plaintext, int rshift){     //decrypt caesar
    string v;

    for (int i = 0; i < plaintext.size(); i++){
        v += shiftChar(plaintext[i], rshift);
    }
    return v;
}

char unshift(char c, int rshift){                       //unshift
    if(islower(c)){
        return (c - 'a'- rshift + 26) % 26 + 'a';
    }
    if(isupper(c)){
        return (c - 'A' - rshift + 26) % 26 + 'A';
    }
    return c;
}

string decryptVigenere(string ciphertext, string keyword)       //decrypt vigenere
{
    string ans;
    int j = 0;
    for( int i = 0; i < ciphertext.size(); i++){
        if(isalpha(ciphertext[i])){
            ans+=unshift(ciphertext[i], keyword[j] - 'a');      //unshift before proceeding
            j++;
        }
        else{
            ans += ciphertext[i];
        }
        if(j == keyword.size()){
            j = 0;
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);            //separate each letter
    string keyword;
    int shift; 
    
    cout << "keyword: ";
    cin >> keyword;
    cout << "shift: " << endl;
    cin >> shift;
    
    cout << decryptVigenere(s, keyword) << endl;        //vigenere
    cout << decryptCaesar(s, shift) << endl;            //caesar
    
}