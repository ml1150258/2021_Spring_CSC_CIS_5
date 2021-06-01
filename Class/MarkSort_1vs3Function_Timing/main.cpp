/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 10th, 2021, 1:20 PM
 * Purpose:  Timing Analysis
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Setting the Random Number Seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
void fillAry(int [],int);
void prntAry(int [],int,int);
void markSort(int [],int);
void mrkSort(int [],int);
void smlVal(int [],int,int);
void swap(int &, int &);
void copy(int [],int [],int);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=160000;//Size of the Array
    int array[SIZE],brray[SIZE];   //Array
    
    //Initialize Variables
    fillAry(array,SIZE);
    copy(brray,array,SIZE);
    //prntAry(array,SIZE,10);
    //prntAry(brray,SIZE,10);
    cout<<"The size of the arrays to sort = "<<SIZE<<endl<<endl;
    
    //Map Inputs to Outputs -> Process
    int beg=time(0);
    markSort(array,SIZE);
    int end=time(0);
    cout<<"1 Function Mark Sort Runtime = "<<end-beg<<" secs"<<endl<<endl;
     
    beg=time(0);
    mrkSort(brray,SIZE);
    end=time(0);
    cout<<"3 Function Mark Sort Runtime = "<<end-beg<<" secs"<<endl<<endl;

        
    //Display Inputs/Outputs
    //prntAry(array,SIZE,10);
    //prntAry(brray,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void copy(int b[],int a[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void markSort(int a[],int n){
    for(int i=0;i<n-1;i++){      //Loop for each position in List
        for(int j=i+1;j<n;j++){  //Loop to swap with first in List
            if(a[i]>a[j]){       //Put the smallest at top of List
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++)
        smlVal(a,n,i);
}

void smlVal(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[i]<a[pos])
            swap(a[pos],a[i]);
    }
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
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
        a[i]=rand();//[0,2^31-1]
        //a[i]=rand()%90+10;//[10,99]
    }
}