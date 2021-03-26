/*
    Author: Dr. Mark E. Lehr
    Date:   March 23rd, 2021  11:04am
    Purpose:Grade with a Ternary Operator
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cstdlib>     //Random Library Function
#include <ctime>       //Time Library
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
    unsigned char score,//Score for assignment [0,100]
                  grade,//A,B,C,D,F
                    min,//Minimum Score
                    max;//Maximum Score
    
    //Initialize variables
    max=100;
    min=50;
    score = rand()%(max-min+1) + min;//Typical Random Number Range [min,max]
    
    //Process, map inputs to outputs
    if(score >= 90){ 
        grade='A';
    }else if(score >= 80){
        grade='B';
    }else if(score >= 70){
        grade='C';
    }else if(score >= 60){
        grade='D';
    }else{
        grade='F';
    }
    
    //Display your initial conditions as well as outputs.
    cout<<"A score of "<<static_cast<int>(score)
        <<" gives a grade = "<<grade<<endl;
    
    //Exit stage right
    return 0;
}