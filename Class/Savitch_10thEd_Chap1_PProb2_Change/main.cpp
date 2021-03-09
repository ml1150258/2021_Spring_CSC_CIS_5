/*
    Author: Dr. Mark E. Lehr
    Date:   March 4th, 2021  11:34am
    Purpose:Calculate Change in your Pocket
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const char QUARTER=25; //Number of cents/pennies in a quarter
const char NICKEL=5;   //Number of cents/pennies in a nickel
const char DIME=10;    //Number of cents/pennies in a dime

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nQrts,//Number of Quarters
                  nNckls,//Number of Nickels
                  nDimes,//Number of dimes
                 pcktChg;//The total change in our pocket in cents
    
    //Initialize variables
    cout<<"This program calculates the change in your pocket"<<endl;
    cout<<"Input the number of nickels, dimes and quarters"<<endl;
    cin>>nNckls>>nDimes>>nQrts;
    
    //Process, map inputs to outputs
    pcktChg=nNckls*NICKEL+nDimes*DIME+nQrts*QUARTER;
    
    //Display your initial conditions as well as outputs.
    cout<<"Your pocket change is = "<<pcktChg<<" cents"<<endl;
    
    //Exit stage right
    return 0;
}