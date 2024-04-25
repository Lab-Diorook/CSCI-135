/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 10E

[description]
.
.
.
.
.
.
.
.
.
.
.
*/


#include <iostream>
#include <string>
using namespace std;

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

Time addMinutes(Time time0, int min)
{
    time0.m += min;

    while (time0.m >= 60)
    {
        time0.m -= 60;
        time0.h += 1;
    }
    
    while (time0.h >= 24)
    {
        time0.h -= 24;
    }
    
    return time0;
}

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

string movieGenre(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    return g;
}

void printTimeSlot(TimeSlot ts)
{
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    cout << ts.movie.title << " " << movieGenre(ts.movie) << " ("  << ts.movie.duration << " min) [starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " << endTime.h << ":" << endTime.m << "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
    TimeSlot next = {nextMovie, addMinutes(ts.startTime, ts.movie.duration)};

    return next;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    int time1 = minutesSinceMidnight(ts1.startTime), time2 = minutesSinceMidnight(ts2.startTime);

    if (time1 <= time2 && ts1.movie.duration > time2-time1)
    {
        return 1;
    }

    else if (time2 < time1 && ts2.movie.duration > time1-time2)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    Time now, now2;
    int min;

    cout << "Enter first time: ";
    cin >> now.h >> now.m;

    cout << "Enter second time: ";
    cin >> now2.h >> now2.m;

    cout << "These moments of time are " << minutesSinceMidnight(now) << " and " << minutesSinceMidnight(now2);
    cout << " minutes after midnight." << endl;
    cout << "The interval between them is " << minutesUntil(now, now2) << " minutes." << endl;
}