/*
    Author: Dr. Mark E. Lehr
    Date:   March 25th, 2021  11:12am
    Purpose:Sorting 3 names
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
    char name1[SIZE],name2[SIZE],name3[SIZE];
    
    //Initialize variables
    cout<<"This program sorts 3 names"<<endl;
    cout<<"Input 3 names less than 20 characters in length"<<endl;
    cin>>name1>>name2>>name3;
 
    //Display the results
    cout<<"Names in order are "<<endl;
    if(strcmp(name1,name2)<0 && strcmp(name2,name3)<0){
        cout<<name1<<" "<<name2<<" "<<name3<<endl;
    }else if(strcmp(name1,name3)<0 && strcmp(name3,name2)<0){
        cout<<name1<<" "<<name3<<" "<<name2<<endl;
    }else if(strcmp(name2,name1)<0 && strcmp(name1,name3)<0){
        cout<<name2<<" "<<name1<<" "<<name3<<endl;
    }else if(strcmp(name2,name3)<0 && strcmp(name3,name1)<0){
        cout<<name2<<" "<<name3<<" "<<name1<<endl;
    }else if(strcmp(name3,name1)<0 && strcmp(name1,name2)<0){
        cout<<name3<<" "<<name1<<" "<<name2<<endl;
    }else{
        cout<<name3<<" "<<name2<<" "<<name1<<endl;
    }
 
    //Exit stage right
    return 0;
}