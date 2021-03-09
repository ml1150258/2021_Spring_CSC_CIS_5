/*
    Author: Dr. Mark E. Lehr
    Date:   March 9th, 2021  11:28am
    Purpose:How many candy bars can I eat without gaining weight!
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
    unsigned short weight, //Weight in lbs
                   height, //Height in inches
                   age,    //Age in years
                   calCBar,//Calories in a candy bar
                   nmCBars;//Number candy bars truncated
    char           sex;    //Sex M-Male, F-Female
    float          bmr;    //Basal Metabolic Rate Calories/day
    
    //Initialize variables
    calCBar = 230;//Approximate Calories / Candy Bar
    cout<<"This program calculates how many Candy Bars you can eat per day"<<endl;
    cout<<"without gaining weight."<<endl;
    cout<<"Input weight-lbs, height in inches, and age in years"<<endl;
    cin>>weight>>height>>age;
    cout<<"Indicate sex M/F"<<endl;
    cin>>sex;
    
    //Process, map inputs to outputs
    bmr=(sex=='F')?
        655 + (4.3 * weight) + ( 4.7 * height) - (4.7 * age):
        66  + (6.3 * weight) + (12.9 * height) - (6.8 * age);
    nmCBars = bmr/calCBar;
    
    //Display your initial conditions as well as outputs.
    cout<<"The number of candy bars you may eat = "<<nmCBars<<endl;
    
    //Exit stage right
    return 0;
}

