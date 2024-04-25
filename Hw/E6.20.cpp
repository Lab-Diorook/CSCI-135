/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.20

[description]
.
.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b)
{
    vector<int> result;
    int i1 = 0, i2 = 0, size = a.size() + b.size();

    for (int i = 0; i < size; i++)
    {
        result.push_back(b.size() <= i2 || a[i1] < b[i2] ? a[i1++] : b[i2++]);
    }

    return result;
}
