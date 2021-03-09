/*
    Author: Dr. Mark E. Lehr
    Date:   March 4th, 2021  11:16am
    Purpose:Free Fall
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const float GRAVITY=32.174;//Acceleration due to Gravity in ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float time,//Time in seconds
       hghtDrp;//The distance fallen during the above time in ft;
    
    //Initialize variables
    cout<<"This program calculates free fall"<<endl;
    cout<<"Input the time during free fall in seconds"<<endl;
    cin>>time;
    
    //Process, map inputs to outputs
    hghtDrp=GRAVITY*time*time/2;
    
    //Display your initial conditions as well as outputs.
    cout<<"The object under free fall traverses "<<hghtDrp<<" feet"<<endl;
    
    //Exit stage right
    return 0;
}

