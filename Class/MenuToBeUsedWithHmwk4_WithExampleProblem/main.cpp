/*
    Author: Dr. Mark E. Lehr
    Date:   April 1st, 2021  11:22am
    Purpose:Menu to be used with homework
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>     //Format Library
#include <fstream>     //File Stream Library
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
        cout<<"Type 0 for Problem MinMax "<<endl;
        cout<<"Type 1 for Problem MinMax File"<<endl;
        cout<<"Type 2 for Problem Gaddis Chap 4 Prob 15"<<endl;
        cout<<"Type 3 for Problem Gaddis Chap 4 Prob 20"<<endl;
        cin>>choice;
        
        //Problems solved
        switch(choice){
            case '0':{
                cout<<"Put Solution to Problem MinMax Here"<<endl<<endl<<endl;
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
                break;
            }
            case '1':{
                cout<<"Put Solution to Problem MinMax File"<<endl<<endl<<endl;
                //Declare variables
                fstream  in,//Input file
                        out;//Output file
                unsigned short min, //Min value input
                               max, //Max value input
                           inptInt; //Positive integer to input
                const int SIZE=21;//Size of the input file name
                char fInput[SIZE]="input.dat";
                string fOutput="output.dat";

                //Initialize variables
                in.open(fInput,ios::in);
                out.open(fOutput,ios::out);

                //Input the initial value to setup the loop
                out<<"This program finds the min and max value of positive inputs"<<endl;
                in>>inptInt;
                out<<inptInt<<endl;
                max=min=inptInt;

                //Loop on all succeeding values
                while(in>>inptInt){
                    if(max<inptInt)max=inptInt;
                    if(min>inptInt)min=inptInt;
                    out<<inptInt<<endl;
                }

                //Display your initial conditions as well as outputs.
                out<<endl;
                out<<"The Minimum value found in the input sequence = "<<min<<endl;
                out<<"The Maximum value found in the input sequence = "<<max<<endl;

                //Close the input/output files
                in.close();
                out.close();
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

