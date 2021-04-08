/*
    Author: Dr. Mark E. Lehr
    Date:   April 6th, 2021  11:12am
    Purpose:Approximate PI
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath>       //For exact value of pi
#include <cstdlib>     //Random number generator
#include <ctime>       //Time Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const float PI=4*atan(1);//A definition of PI
const unsigned int MAXRND=(1<<31)-1; //2^31-1

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int nDarts,//Number of Darts to throw
       nCircle;//Number of Darts in the circle
    float apprxPI;//Approximate value of PI
    
    //Initialize variables
    nCircle=0;
    nDarts=100000;
    
    //Play the game
    for(int thrwDrt=1;thrwDrt<=nDarts;thrwDrt++){
        float x=1.0f*rand()/MAXRND;//X coordinate of the dart [0,1]
        float y=1.0f*rand()/MAXRND;//Y coordinate of the dart [0,1]
        if(x*x+y*y<=1)nCircle++;//Did it fall in the unit circle -> Pythagoras
    }
    apprxPI=4.0f*nCircle/nDarts;
    
    //Display your initial conditions as well as outputs.
    cout<<"The approximate value of PI = "<<apprxPI<<" with "
            <<nDarts<<" number of darts."<<endl;
    cout<<"The exact value of PI = "<<PI<<endl;
    
    //Exit stage right
    return 0;
}