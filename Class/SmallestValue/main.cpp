/*
    Author: Dr. Mark E. Lehr
    Date:   May 18th, 2021  10:07am
    Purpose:Smallest Value
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cstdlib>     //Library using random numbers
#include <ctime>       //Time Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
void fillAry(int [],int,int,int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int);
int  smlVal(int [],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(NULL)));
    
    //Declare variables
    const int SIZE=100;//Size of the array
    int array[SIZE]={};
    int toFind,      //Value to find in the array
           beg,      //Beginning random values to generate
           end,      //End of random values to generate
           perLine;  //Number of values to print per line
    
    //Initialize variables
    end=SIZE;
    beg=perLine=10;
    fillAry(array,SIZE,beg,end);
    toFind=smlVal(array,SIZE);
    
    //Process, map inputs to outputs
    if(linSrch(array,SIZE,toFind)){
        cout<<toFind<<" was found in the array"<<endl;
    }else{
        cout<<toFind<<" was not found in the array"<<endl;
    }
    
    //Display your initial conditions as well as outputs.
    prntAry(array,SIZE,perLine);
    
    //Exit stage right
    return 0;
}

int smlVal(int a[],int n){
    int small=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<small)small=a[i];
    }
    return small;
}

bool linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(val==a[i])return true;
    }
    return false;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n,int beg,int end){
    for(int i=0;i<n;i++){
        a[i]=rand()%(end-beg)+beg;
    }
}