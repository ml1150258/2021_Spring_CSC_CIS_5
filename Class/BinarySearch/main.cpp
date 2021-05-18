/*
    Author: Dr. Mark E. Lehr
    Date:   May 18th, 2021  10:07am
    Purpose:Array Binary Search
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
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int);
bool binSrch(int [],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(NULL)));
    
    //Declare variables
    const int SIZE=100;//Size of the array
    int array[SIZE]={};
    int toFind,      //Value to find in the array
           perLine;  //Number of values to print per line
    
    //Initialize variables
    perLine=10;
    fillAry(array,SIZE);
    toFind=rand()%SIZE+1;
    toFind=101;
    
    //Process, map inputs to outputs
    cout<<"Linear Result"<<endl;
    if(linSrch(array,SIZE,toFind)){
        cout<<toFind<<" was found in the array"<<endl;
    }else{
        cout<<toFind<<" was not found in the array"<<endl;
    }
    
    cout<<"Binary Result"<<endl;
    if(binSrch(array,SIZE,toFind)){
        cout<<toFind<<" was found in the array"<<endl;
    }else{
        cout<<toFind<<" was not found in the array"<<endl;
    }
    
    //Display your initial conditions as well as outputs.
    prntAry(array,SIZE,perLine);
    
    //Exit stage right
    return 0;
}

bool binSrch(int a[],int n,int val){
    int low,high,middle;//These are indexes
    low=0;   //Low Index
    high=n-1;//High Index
    do{
        middle=(low+high)/2;  //Middle index of the array
        if(a[middle]==val)return true;
        else if(a[middle]<val){
            low=middle+1;
        }else{
            high=middle-1;
        }
    }while(high>=low);
    return false;
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

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
}