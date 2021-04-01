/*
    Author: Dr. Mark E. Lehr
    Date:   April 1st, 2021  10:07am
    Purpose:Determine Min/Max
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
    //Set the Random number seed
    
    //Declare variables
    unsigned short min, //Min value input
                   max; //Max value input
    short inptInt, //Integer to input
          stpLoop;//Number to end the loop, i.e. Sentinel
    
    //Initialize variables
    stpLoop=-99;//Sentinel Value
    
    //Input the initial value to setup the loop
    cout<<"This program finds the min and max value of inputs"<<endl;
    cout<<"Input the next value +Integer, "<<stpLoop<<" to stop"<<endl;
    cin>>inptInt;
    max=min=inptInt;
    
    //Loop on all succeeding values
    while(inptInt!=stpLoop){
        if(max<inptInt)max=inptInt;
        if(min>inptInt)min=inptInt;
        cout<<"Input the next value +Integer, -99 to stop"<<endl;
        cin>>inptInt;
    }
    
    //Display your initial conditions as well as outputs.
    cout<<endl;
    cout<<"The Minimum value found in the input sequence = "<<min<<endl;
    cout<<"The Maximum value found in the input sequence = "<<max<<endl;
    
    //Exit stage right
    return 0;
}