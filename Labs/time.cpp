/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 10A

[description]
.
.
*/

class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time)
{
    return ((time.h * 60) + time.m);
}

int minutesUntil(Time earlier, Time later)
{
    return (((later.h * 60) + later.m) - ((earlier.h * 60) + earlier.m));
}

#include <iostream>
using namespace std;

int main()
{
    Time now, now2;

    cout << "Enter first time: ";
    cin >> now.h >> now.m;

    cout << "Enter second time: ";
    cin >> now2.h >> now2.m;

    cout << "These moments of time are " << minutesSinceMidnight(now) << " and " << minutesSinceMidnight(now2);
    cout << " minutes after midnight." << endl;
    cout << "The interval between them is " << minutesUntil(now, now2) << " minutes." << endl;
}