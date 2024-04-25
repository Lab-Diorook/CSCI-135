/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5D

[description]
.
.
*/

#include <iostream>
using namespace std;

int countPrimes(int a, int b);
bool isPrime(int n);

int main(){
    cout << countPrimes(1,20) << endl;
    return 0;
}

bool isPrime(int n){
    int i;
    bool isPrime = true;
    
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

int countPrimes(int a, int b){
    int num_primes = 0;
    
    for (int i = a; i <= b; i++) {
        isPrime(i);
        
        if(isPrime(i)) {
            num_primes += 1;
        }
    }
    return num_primes;
}