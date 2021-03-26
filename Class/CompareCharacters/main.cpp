/*
    Author: Dr. Mark E. Lehr
    Date:   March 16th, 2021  1:45pm
    Purpose:Comparing and ordering 2 Names
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <string.h>    //String compare function
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int ROWS=2,COLS=10;
    char names[ROWS][COLS]={"Mark","Mark"};
    
    //Process, map inputs to outputs
    if(strcmp(names[0],names[1])<0){
        cout<<names[0]<<" is less than "<<names[1]<<endl;
    }else if(strcmp(names[0],names[1])>0){
        cout<<names[0]<<" is greater than "<<names[1]<<endl;
    }else if(strcmp(names[0],names[1])==0){
        cout<<names[0]<<" is the same as "<<names[1]<<endl;
    }
    
    //Display your initial conditions as well as outputs.
    for(int row=0;row<ROWS;row++){
        cout<<names[row]<<endl;
    }
    
    //Exit stage right
    return 0;
}

