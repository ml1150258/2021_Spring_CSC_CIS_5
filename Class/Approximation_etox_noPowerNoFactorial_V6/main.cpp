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
           n,//Number of terms in the loop series
      nterms;//Number of terms to visualize the cumulative effect
    float apprxE,//The approximation to the exponential
               x;//The exponential term e(x)
    
    //Initialize the sequence of terms to use in the approximation
    nterms=13;
    
    for(int n=1;n<=nterms;n++){
        //Initialize
        x=2.0f;
        apprxE=1.0f;
        float xdivi=1;

        for(int i=1;i<n;i++){
            //Initialize variables
            xdivi*=x/i;//The difference between each term x/i
            apprxE+=xdivi;//Add each term
        }

        //Display your initial conditions as well as outputs.
        cout<<"The approximate value of exponential("<<x<<")="<<apprxE
                <<" using "<<n<<" terms!"<<endl;
    }
    
    cout<<endl<<"The exact value of the exponential("<<x<<")="<<exp(x)<<endl;
    
    //Exit stage right
    return 0;
}