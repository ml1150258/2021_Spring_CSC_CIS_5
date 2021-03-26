/*
    Author: Dr. Mark E. Lehr
    Date:   March 16th, 2021  11:04am
    Purpose:Positive/Negative/Total Sums
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
    short x,//Integer to input
            negSum,//Negative Sums
            posSum,//Positive Sums
            totSum;//Total Sums
    
    //Initialize variables
    negSum=posSum=totSum=0;
    
    //Prompt
    cout<<"This program adds 10 positive or negative numbers"<<endl;
    cout<<"and outputs the sums"<<endl;
    cout<<"Input 10 short integers"<<endl;
    
    //Repeat 10 times
    cin>>x;
    int utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    cin>>x;
    utility=x<0?negSum+=x:posSum+=x;
    
    //Calculate the total sum
    totSum=negSum+posSum;
    
    //Display your initial conditions as well as outputs.
    cout<<"Negative sum = "<<negSum<<endl;
    cout<<"Positive sum = "<<posSum<<endl;
    cout<<"Total sum    = "<<totSum<<endl;
    
    //Exit stage right
    return 0;
}

