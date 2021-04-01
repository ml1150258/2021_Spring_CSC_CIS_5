/*
    Author: Dr. Mark E. Lehr
    Date:   April 1st, 2021  11:22am
    Purpose:Menu to be used with homework
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>     //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    char choice,//To be used in the menu program program
         nProbs;//Max number of Problems
    
    //Initialize variables
    nProbs='4';
    
    //Process, map inputs to outputs
    do{
        //Menu, List of problems
        cout<<"Type 0 for Problem Gaddis Chap 4 Prob 1 "<<endl;
        cout<<"Type 1 for Problem Gaddis Chap 4 Prob 10"<<endl;
        cout<<"Type 2 for Problem Gaddis Chap 4 Prob 15"<<endl;
        cout<<"Type 3 for Problem Gaddis Chap 4 Prob 20"<<endl;
        cin>>choice;
        
        //Problems solved
        switch(choice){
            case '0':{
                cout<<"Put Solution to Problem 0"<<endl<<endl<<endl;
                break;
            }
            case '1':{
                cout<<"Put Solution to Problem 1"<<endl<<endl<<endl;
                break;
            }
            case '2':{
                cout<<"Put Solution to Problem 2"<<endl<<endl<<endl;
                break;
            }
            case '3':{
                cout<<"Put Solution to Problem 3"<<endl<<endl<<endl;
                break;
            }
        }
    }while(choice<nProbs);
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}

