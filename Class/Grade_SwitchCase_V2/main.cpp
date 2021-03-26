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
    switch(score){
        case 100:case 99:case 98:case 97:case 96:case 95:
        case  94:case 93:case 92:case 91:case 90:grade='A';break;
        case  89:case 88:case 87:case 86:case 85:
        case  84:case 83:case 82:case 81:case 80:grade='B';break;
        case  79:case 78:case 77:case 76:case 75:
        case  74:case 73:case 72:case 71:case 70:grade='C';break;
        case  69:case 68:case 67:case 66:case 65:
        case  64:case 63:case 62:case 61:case 60:grade='D';break;
        default: grade='F';
    }
    
    //Display your initial conditions as well as outputs.
    cout<<"A score of "<<static_cast<int>(score)
        <<" gives a grade = "<<grade<<endl;
    
    //Exit stage right
    return 0;
}