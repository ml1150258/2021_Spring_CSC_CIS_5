 /*
 * File:   Array.h
 * Author: mlehr
 * Purpose:  Specification for our Array ADT
 * Created on June 3, 2021, 10:11 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

const int SIZE=100;//Size of the Array
class Array{
    private:
        int size;
        int array[SIZE];   //Array
        int index[SIZE];   //Array
    public:
        void fillAry(int);
        void prntAry(int);
        void markSrt();
};

void Array::markSrt(){
    for(int i=0;i<size-1;i++){      //Loop for each position in List
        for(int j=i+1;j<size;j++){  //Loop to swap with first in List
            if(array[index[i]]>array[index[j]]){       //Put the smallest at top of List
                index[i]=index[i]^index[j];  //In place Swap
                index[j]=index[i]^index[j];  //In place Swap
                index[i]=index[i]^index[j];  //In place Swap
            }
        }
    }
}

void Array::prntAry(int perLine){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<array[index[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}


void Array::fillAry(int n){
    size=n;
    for(int i=0;i<size;i++){
        array[i]=rand()%90+10;//[10,99]
        index[i]=i;
    }
}

#endif /* ARRAY_H */