/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5C

[description]
.
.
*/

#include <iostream>
using namespace std;


bool isPrime(int n){ 
    if (n <= 1){
        return false;
    }
    else if (n <= 3){
        return true;
    }
   
    else if (n%2 == 0 || n%3 == 0){
        return false;
    }
   
    for (int i=5; i*i<=n; i=i+6){
        if (n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true; 
} 
 
int nextPrime(int N){
    
    if (N <= 1){
        return 2;
    }

    int prime = N;
    bool found = false;

    while (!found){
        prime++;
 
        if (isPrime(prime)){
            found = true;
        }
    }
    return prime;
}

int main(){
    int N;
    cout << "enter num: " << endl;
    cin >> N;
 
    cout << nextPrime(N);
 
    return 0;
}