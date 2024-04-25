/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7B

This code adds spaces/indents.
.
.
*/

#include <iostream> 
#include <cctype>
#include <string>
using namespace std;

string removeLeadingSpaces(string line);
int countChar(string line, char c);
void indent();

int main(){
    indent();
    return 0;
}

void indent(){      //indent
    
    string line;
    int open_braces;
    int closed_braces;
    int open_blocks = 0;
    int indentation_level;
    
    while(getline(cin, line)){
        line =  removeLeadingSpaces(line);
        
        indentation_level = open_blocks;
        if (line[0] == '}'){
            indentation_level = open_blocks-1;
        }
        for (int i = 0; i < indentation_level; i++){
            cout << "\t";
        }
        
        open_braces = countChar(line, '{');
        closed_braces = countChar(line, '}');
        open_blocks += open_braces - closed_braces;
        cout << line << endl;
    }
}

int countChar(string line, char c){
    int counter = 0;
    
    for (int i = 0; i < line.size(); i++){
        if(line[i] == c){
            counter++;
        }
    }
    
    return counter;
}

string removeLeadingSpaces(string line)
{
    int i;
    
    for(i = 0; i < line.size(); i++){
        if(!isspace(line[i])){
            break;
        }
    }
    
    return line.substr(i);
} 
