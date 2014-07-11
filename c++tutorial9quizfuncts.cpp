/*
Travis D.
CS 357
Principles of Programming Languages
c++tutorial9quizfuncts.cpp
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h> 
#include <cstring>

using namespace std;

/*Function Forward Prototypes*/

int option();
float ReadNumber(float);
void WriteNumber(float);


float ReadNumber(float y){

    return y;    
} 


int option(){
    
    int selection;
    
    selection = getche();/*thiContas displays the users input and 
    automatically processes the user's input without 
    having to press the enter key*/
    
    switch (selection)
    {
           case '1':
           case '2': break;
           default: cout<<"\n\nInvalid Input!! Please Try Again\n\n\n";
           }
    return selection;
}

void WriteNumber(float y){
    
     cout<<"The regular value of the user's input is: "<<y;    
    //This is the Fail Loop
    printf("\n\nThe number you inputted was: %f\n\n",y);
} 
