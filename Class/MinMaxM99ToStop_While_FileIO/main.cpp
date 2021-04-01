/*
    Author: Dr. Mark E. Lehr
    Date:   April 1st, 2021  10:07am
    Purpose:Determine Min/Max
 */

//System Libraries
#include <iostream>    //Input/Output Library 
#include <fstream>     //File Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    fstream  in,//Input file
            out;//Output file
    unsigned short min, //Min value input
                   max; //Max value input
    short inptInt, //Integer to input
          stpLoop;//Number to end the loop, i.e. Sentinel
    const int SIZE=21;//Size of the input file name
    char fInput[SIZE]="input.dat";
    string fOutput="output.dat";
    
    //Initialize variables
    in.open(fInput,ios::in);
    out.open(fOutput,ios::out);
    
    stpLoop=-99;//Sentinel Value
    
    //Input the initial value to setup the loop
    out<<"This program finds the min and max value of inputs"<<endl;
    out<<"Input the next value +Integer, "<<stpLoop<<" to stop"<<endl;
    in>>inptInt;
    out<<inptInt<<endl;
    max=min=inptInt;
    
    //Loop on all succeeding values
    while(inptInt!=stpLoop){
        if(max<inptInt)max=inptInt;
        if(min>inptInt)min=inptInt;
        out<<"Input the next value +Integer, -99 to stop"<<endl;
        in>>inptInt;
        out<<inptInt<<endl;
    }
    
    //Display your initial conditions as well as outputs.
    out<<endl;
    out<<"The Minimum value found in the input sequence = "<<min<<endl;
    out<<"The Maximum value found in the input sequence = "<<max<<endl;
    
    //Close the input/output files
    in.close();
    out.close();
    
    //Exit stage right
    return 0;
}