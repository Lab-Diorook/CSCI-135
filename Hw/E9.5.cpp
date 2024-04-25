/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.5

[description]
.
.
*/

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
	public:
		Rectangle(double input_w, double input_h);
		double get_perimeter();
		double get_area();
		void resize(double factor);
	private:
		double width;
		double height;
};

Rectangle::Rectangle(double input_w, double input_h){
    height = input_w;
    width = input_h;
}

double Rectangle::get_perimeter(){
    return (2 * (height + width));
}

double Rectangle::get_area(){
    return (height * width);
}
void Rectangle::resize(double factor){
    width = width * factor;
    height = height * factor;
}
