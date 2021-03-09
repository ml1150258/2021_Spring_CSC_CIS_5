/*
    Author: Dr. Mark E. Lehr
    Date:   March 4th, 2021  11:00am
    Purpose:Big Letter C
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    char c;//Letter to use in outputting the Big C Banner 
    
    //Initialize variables
    cout<<"This program produces a Big Banner Letter C"<<endl;
    cout<<"Choose the character to use in forming the Banner Letter C"<<endl;
    cin>>c;
    cout<<endl;
    
    //Process, map inputs to outputs
    
    //Display your initial conditions as well as outputs.
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"  "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<" "<<c<<"  "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    
    
    //Exit stage right
    return 0;
}

