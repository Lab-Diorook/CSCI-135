/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.6

Prints the middle of a string.
.
.
*/

#include <iostream>     //normal
#include <string>       //letter base
using namespace std;

string middle(string str) {             //middle as it own main
	int i = str.length();

	if ((i % 2) == 0) {                 //detect odd or even
		return str.substr(i/2 - 1, 2);
	}
	return str.substr(i/2, 1);
}

int main() {
	string input;                       //input

	cout << "Enter a word to print the middle character: ";
	cin >> input;
	string result = middle(input);      //do middle function

	cout << "The middle char is: " << result << endl;   //output
	
	return 0;
}