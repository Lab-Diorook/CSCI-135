/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.3

[description]
.
.
*/

#include <iostream>
using namespace std;
//create class 
class Circuit {
    public:
    Circuit(){
        first_switch=0;
        second_switch=0;
        lamp_state=0;
    }
    int get_first_switch_state() const {
        return first_switch;
    }
    int get_second_switch_state() const {
        return second_switch;
    }
    int get_lamp_state() const {
        return lamp_state;
    }
    //Toggle a switch will affect lamp state.
    //When toggling a switch,
    //the lamp state is toggled as well.
    //For example, suppose you enter the hall way,
    //the light was off, then you flip the first
    //switch (start from off), so the first switch
    //is toggled from off to on, and the light was
    //toggled from off to on as well.
    //Then you walk through the hall way and
    //reach the second switch in the end of hall way,
    //when you flip the second switch,
    //the second switch is changed from off to on,
    //Then you walk through the hall way and
    //reach the second switch in the end of hall way,
    //when you flip the second switch,
    //the second switch is changed from off to on,
    //but the light is turned from on to off.

    //Now suppose you walk back to the beginning
    //of hall way where the first switch is located,
    //and flipped the switch,
    //then the light is changed from off to on
    //TODO: when first switch is toggled,

    //value of first_switch is changed
    //(from 0 to 1, or from 1 to 0).
    //Also, the state of lamp is also changed
    //(from 0 to 1, or from 1 to 0).
    //Hint: you can use if-else statement,
    //but a simpler way is to use NOT operator !.
    //That is, !0 is 1 and !1 is 0.

    void toggle_first_switch(){
        if(first_switch == 0)
        {first_switch = 1;}
        else
        {first_switch = 0;}
        
        if(second_switch == first_switch)
        {lamp_state = 0;}
        else
        {lamp_state = 1;}
    }
    void toggle_second_switch(){
        if(second_switch == 0)
        {second_switch = 1;}
        else 
        {second_switch = 0;}

        if(second_switch == first_switch)
        {lamp_state = 0;}
        else
        {lamp_state = 1;}
    }
    private:
    int first_switch;
    int second_switch;
    int lamp_state;

};