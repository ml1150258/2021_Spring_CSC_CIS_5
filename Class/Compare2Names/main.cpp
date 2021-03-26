/*
    Author: Dr. Mark E. Lehr
    Date:   March 25th, 2021  11:12am
    Purpose:Compare 2 Names
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <string.h>    //String Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    const int SIZE=20;
    char name1[SIZE],name2[SIZE];
    
    //Initialize variables
    cout<<"This program compares 2 names"<<endl;
    cout<<"Input 2 names less than 20 characters in length"<<endl;
    cin>>name1>>name2;
 
    //Display the results
    cout<<"Compare 2 Names"<<endl;
    
    if(strcmp(name1,name2)<0){
        cout<<name1<<" < "<<name2<<endl;
    }
    
    if(strcmp(name1,name2)>0){
        cout<<name1<<" > "<<name2<<endl;
    }
    
    if(strcmp(name1,name2)==0){
        cout<<name1<<" = "<<name2<<endl;
    }

    //Exit stage right
    return 0;
}