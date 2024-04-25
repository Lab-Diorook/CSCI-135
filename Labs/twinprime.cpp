/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5E

checks if there is a twin prime.
.
.
*/

#include <iostream>
using namespace std;

bool isTwinPrime(int n);

int main(){
    cout << isTwinPrime(1) << endl;
    return 0;
}

bool isPrime(int n){
    int i;
    bool isPrime = true;
    
    if (n <= 1){
        isPrime = false;
    }
    // 0 and 1 are not prime numbers
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

bool isTwinPrime(int n){
    cin >> n;

    if (isPrime(n)){
        if (isPrime(n - 2) || isPrime(n +2)){
            return true;
        }
        else{
            return false;
        }
    }

    return false; 
}