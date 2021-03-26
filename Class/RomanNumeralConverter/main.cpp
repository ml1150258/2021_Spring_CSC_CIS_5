/*
    Author: Dr. Mark E. Lehr
    Date:   March 25th, 2021  10:26am
    Purpose:Roman Numeral Conversion using all branching constructs
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
    unsigned short nm2Cvrt;//Number to Convert
    string         romnNum;//Roman number conversion
    
    //Initialize variables
    romnNum="";
    cout<<"This program converts Arabic "<<
          "Numbers in the range of 1000 - 3000"<<endl;
    cout<<"Input the Arabic Number"<<endl;
    cin>>nm2Cvrt;
    
    //Process, map inputs to outputs
    //Is the input valid?
    if(nm2Cvrt<1000 || nm2Cvrt>3000){
        cout<<"Invalid Arabic Number -> "<<nm2Cvrt<<endl;
        exit(1);
    }
    
    //Convert the number of 1000's
    unsigned char n1000s=nm2Cvrt/1000;
    switch(n1000s){
        case 3:romnNum+="M";
        case 2:romnNum+="M";
        case 1:romnNum+="M";
    }
    
    //Convert the number of 100's
    unsigned char n100s=(nm2Cvrt-n1000s*1000)/100;
    if(n100s==9)romnNum+="CM";
    if(n100s==8)romnNum+="DCCC";
    if(n100s==7)romnNum+="DCC";
    if(n100s==6)romnNum+="DC";
    if(n100s==5)romnNum+="D";
    if(n100s==4)romnNum+="CD";
    if(n100s==3)romnNum+="CCC";
    if(n100s==2)romnNum+="CC";
    if(n100s==1)romnNum+="C";
    
    //Convert the number of 10's
    unsigned char n10s=nm2Cvrt%100/10;
    if(n10s==9)romnNum+="XC";
    else if(n10s==8)romnNum+="LXXX";
    else if(n10s==7)romnNum+="LXX";
    else if(n10s==6)romnNum+="LX";
    else if(n10s==5)romnNum+="L";
    else if(n10s==4)romnNum+="XL";
    else if(n10s==3)romnNum+="XXX";
    else if(n10s==2)romnNum+="XX";
    else if(n10s==1)romnNum+="X";
    
    //Convert the number of 1's
    unsigned char n1s=nm2Cvrt%10;
    romnNum += n1s==9?"IX":
               n1s==8?"VIII":
               n1s==7?"VII":
               n1s==6?"VI":
               n1s==5?"V":
               n1s==4?"IV":
               n1s==3?"III":
               n1s==2?"II":
               n1s==1?"I":"";
    
    //Display your initial conditions as well as outputs.
    cout<<"Arabic Number -> "<<nm2Cvrt<<" = Roman Numeral -> "<<romnNum<<endl;
    
    //Exit stage right
    return 0;
}