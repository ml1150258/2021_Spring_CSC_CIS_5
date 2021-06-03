 /*
 * File:   Array.h
 * Author: mlehr
 * Purpose:  Specification for our Array ADT
 * Created on June 3, 2021, 10:11 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

const int SIZE=100;//Size of the Array
struct Array{
    int size;
    int array[SIZE];   //Array
    int index[SIZE];   //Array
};

#endif /* ARRAY_H */