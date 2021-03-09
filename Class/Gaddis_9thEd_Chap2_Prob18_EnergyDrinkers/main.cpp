/*
    Author: Dr. Mark E. Lehr
    Date:   March 4th, 2021  10:22am
    Purpose:Energy Drinkers surveyed
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
unsigned char PERCENT=100;//Conversion to or from %
float         halfPpl=0.5f;//Represents half a person

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nCstSur,//Number of customers surveyed
                   nEnergy,//Number of energy drinkers
                   nCitrus;//Number of citrus drinkers
    unsigned char  prcEnrg,//Percentage of Energy Drinkers
                   prcCit; //Percentage of Citrus Drinkers
    
    //Initialize variables
    nCstSur=1.65e4f;//16,500 customers surveyed
    prcEnrg=15;//15% of the customers surveyed
    prcCit=58;//58% of the Energy Drinkers
    
    //Process, map inputs to outputs
    nEnergy=1.0f*nCstSur*prcEnrg/PERCENT+halfPpl;
    nCitrus=static_cast<float>(nEnergy)*prcCit/PERCENT+halfPpl;
    
    //Display your initial conditions as well as outputs.
    cout<<"The number of customers surveyed  = "<<nCstSur<<endl;
    cout<<"The percentage of energy drinkers =    "<<static_cast<int>(prcEnrg)
            <<"%"<<endl;
    cout<<"The percentage of citrus drinkers =    "<<static_cast<int>(prcCit)
            <<"%"<<endl;
    cout<<"The number of energy drinkers     =  "<<nEnergy<<endl;
    cout<<"The number of citrus drinkers     =  "<<nCitrus<<endl;
    
    //Exit stage right
    return 0;
}

