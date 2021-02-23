/*
    Author: Dr. Mark E. Lehr
    Date:   February 18th, 2021  11:12am
    Purpose:First Program "Hello World"
    Version:First and Last
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cstdlib>     //Random Seed and Random Function
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int random;//Declare random number
    
    //Initialize variables
    random=rand()%90+10;//[10,99]
    
    //Process, map inputs to outputs
    
    //Display your initial conditions as well as outputs.
    cout<<"Random Number between 10 and 100 = "<<random<<endl;
    
    //Exit stage right
    return 0;
}