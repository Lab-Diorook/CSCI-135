/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5B

Tests if number is prime.
.
.
*/

#include <iostream>
using namespace std;

bool isPrime(int n);

int main(){
    cout << isPrime(-1) << endl;
    return 0;
}

bool isPrime(int n){
    int i;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0){
        isPrime = false;
    }
    // 0 and 1 are not prime numbers
    else if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime){
        return true;
    }
    else{
        return false;
    }
}
