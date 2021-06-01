/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 1st, 2021, 11:00 AM
 * Purpose:  Mark Sort Vector
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Setting the Random Number Seed
#include <vector>    //STL Dynamic Array
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
void fillAry(vector<int> &,int);
void prntAry(vector<int> &,int,int);
void markSrt(vector<int> &,int);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables Vector
    int size=100;//Size of the Array
    vector<int> array(size);   //Array
    
    //Initialize Variables
    fillAry(array,size);
    cout<<"Array before Sorting"<<endl;
    prntAry(array,size,10);
    
    //Map Inputs to Outputs -> Process
    markSrt(array,size);
    
    //Display Inputs/Outputs
    cout<<"Array after Sorting"<<endl;
    prntAry(array,size,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void markSrt(vector<int> &a,int n){
    for(int i=0;i<n-1;i++){      //Loop for each position in List
        for(int j=i+1;j<n;j++){  //Loop to swap with first in List
            if(a[i]>a[j]){       //Put the smallest at top of List
                a[i]=a[i]^a[j];  //In place Swap
                a[j]=a[i]^a[j];  //In place Swap
                a[i]=a[i]^a[j];  //In place Swap
            }
        }
    }
}

void prntAry(vector<int> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}