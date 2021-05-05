/*
    Author: Dr. Mark E. Lehr
    Date:   May 4th, 2021  10:32am
    Purpose:All Ways to write a function
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const float PERCENT=100.0f;//Conversion to per cent

//Function Prototypes
float fvSave1(float,float,int);   //Power Function
float fvSave2(float,float,int);   //Exp-Log Functions
float fvSave3(float,float,int);   //For-Loop
float fvSave4(float,float,int);   //Recursion
float fvSave4(float,float,float); //Overloaded Function Call
float fvSave6(float,float,int=12);//Default parameter
void  fvSave7(float &,float,int); //Pass a parameter by reference
int   fvSave8(float &,float,int); //Static Count, Return 2 values

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float p,//Principle in $'s
          i,//Interest rate in decimal
         fv;//Future value
    unsigned char n;//Number of compounding periods in years
    
    //Initialize variables
    p=100.0f;//$100
    fv=p;
    i=0.06f; //6%
    n=0.72/i;//Number of compounding periods using rule of 72
    
    //Process, map inputs to outputs
    
    //Display your initial conditions as well as outputs.
    cout<<"Initial Principle = $"<<p<<endl;
    cout<<"Interest Rate     = "<<i*PERCENT<<"%"<<endl;
    cout<<"Number of compounding periods = "
            <<static_cast<int>(n)<<" years"<<endl;
    cout<<"Savings with power         function = $"<<fvSave1(p,i,n)<<endl;
    cout<<"Savings with exp-log       function = $"<<fvSave2(p,i,n)<<endl;
    cout<<"Savings with for-loop      function = $"<<fvSave3(p,i,n)<<endl;
    cout<<"Savings with recursive     function = $"<<fvSave4(p,i,n)<<endl;
    cout<<"Savings with overload      function = $"<<fvSave4(p,i,1.0f*n)<<endl;
    cout<<"Savings with default-param function = $"<<fvSave6(p,i)<<endl;
    fvSave7(fv,i,n);//Pass by reference
    cout<<"Savings with pass-by-ref   function = $"<<fv<<endl;
    for(int j=1;j<=4;j++){
        fv=p;
        fvSave8(fv,i,n);
    }
    cout<<"Savings with pass-by-ref/static var   function = $"<<fv<<endl;
    cout<<"This function was called "<<fvSave8(fv,i,n)<<" times"<<endl;
    
    //Exit stage right
    return 0;
}

int fvSave8(float &p,float i,int n){
    static int count=0;
    for(int j=1;j<=n;j++){
        p*=(1+i);
    }
    return ++count;
}


void fvSave7(float &p,float i,int n){
    for(int j=1;j<=n;j++){
        p*=(1+i);
    }
}

float fvSave6(float p,float i,int n){
    return p*pow((1+i),n);
}

float fvSave4(float p,float i,float n){//Really our 5th function
    if(n<=0)return p;//Base Case
    return fvSave4(p,i,n-1)*(1+i);//Recursive Call
}

float fvSave4(float p,float i,int n){
    if(n<=0)return p;//Base Case
    return fvSave4(p,i,n-1)*(1+i);//Recursive Call
}

float fvSave3(float p,float i,int n){
    for(int j=1;j<=n;j++){
        p*=(1+i);
    }
    return p;
}

float fvSave2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float fvSave1(float p,float i,int n){
    return p*pow((1+i),n);
}