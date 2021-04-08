/*
    Author: Dr. Mark E. Lehr
    Date:   April 6th, 2021  10:17am
    Purpose:Exponential Approximation
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath>       //Bring in the math library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    int facti,//Factorial
           i,//Dummy Variable to be used as a counter
           n;//Number of terms in the series
    float apprxE,//The approximation to the exponential
               x;//The exponential term e(x)
    
    //Initialize
    x=1.0f;
    apprxE=1.0f;
    n=10;
   
    for(int i=1;i<n;i++){
        //Initialize variables
        facti=1;
        //Process, map inputs to outputs
        for(int j=1;j<=i;j++){
            facti*=j;
        }
        apprxE+=pow(x,i)/facti;
    }
    
    //Display your initial conditions as well as outputs.
    cout<<"The exact value of the exponential("<<x<<")="<<exp(x)<<endl<<endl;
    cout<<"The approximate value of exponential("<<x<<")="<<apprxE
            <<" using "<<n<<" terms!"<<endl;
    
    //Exit stage right
    return 0;
}