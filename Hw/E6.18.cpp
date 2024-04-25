/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.18

[description]
.
.
*/

#include <iostream>
using namespace std;
#include <string>
#include <vector>

vector<int> append(vector<int> a, vector<int> b)
{
    a.insert(a.end(), b.begin(), b.end());
    return a;
}

int main()
{
    vector<int> a = {1,4,9,16};
    vector<int> b = {9,7,4,9,11};
    append(a,b);
    return 0;
}
