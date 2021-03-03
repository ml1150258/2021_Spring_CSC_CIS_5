/*
    Author: Dr. Mark E. Lehr
    Date:   February 25th, 2021  10:13am
    Purpose:Solution to Gaddis Chapter 2 Paint Coverage Problem
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
    float height,//Height of the fence in feet
          length,//Length of the fence in feet
          pntCov,//Paint coverage in ft^2/can
         srfArea;//Surface Area in ft^2
    unsigned short numCans;//Number of cans of paint  2 Byte integer
    
    //Initialize variables
    height=6.e0f;
    length=1.e2f;
    pntCov=3.40e2f;
    
    //Process, map inputs to outputs
    srfArea=2*2*length*height;//Area Rectangle, both sides, painted twice
    numCans=srfArea/pntCov+1;//ft^2/ft^2/can  Round up
    
    //Display your initial conditions as well as outputs.
    cout<<"A fence having dimensions Length = "<<length<<"ft and Height = "
            <<height<<"ft"<<endl;
    cout<<"Requires "<<numCans<<" cans of paint!"<<endl;
    
    //Exit stage right
    return 0;
}

