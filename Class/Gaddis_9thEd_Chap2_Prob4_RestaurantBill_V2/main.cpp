/*
    Author: Dr. Mark E. Lehr
    Date:   March 2nd, 2021  11:20am
    Purpose:Restaurant Bill
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const char  CNVPRC=100;   //Percentage Conversion to Decimal
const float HALFPNY=0.005;//Half a Penny
const char  CNVPNYS=100;  //Convert to Pennies

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float mlCost,//Meal Cost in $'s
          slsTax,//Sales Tax Percent
          tipPrc,//Tip Percentage on meal cost and sales tax
          slsTxD,//Sales Tax in $'s
          tipDol,//Tip in Dollars
         totBill;//Total Bill
    
    //Initialize variables
    mlCost=8.867e1f;//88.67
    slsTax=6.75e0f;//6.75% Sales Tax Percent
    tipPrc=2.0e1f;//20% = Tip Percentage
    
    //Process, map inputs to outputs
    slsTxD=mlCost*slsTax/CNVPRC + HALFPNY;//Add 1/2 cent to round
    int slsTx=(slsTxD * CNVPNYS);//Shifted Left 2 decimal places i.e. *100
    slsTxD=1.0f*slsTx/CNVPNYS;   //Truncated and shifted back 2 decimal places
    
    tipDol=tipPrc*(mlCost+slsTxD)/CNVPRC + HALFPNY;//Add 1/2 cent to round
    int tpDol=(tipDol *CNVPNYS);//Shifted left turning exact Pennies
    tipDol=1.0f*tpDol/CNVPNYS;  //Shifted right for exact cents
    
    totBill=mlCost+slsTxD+tipDol;
    
    //Display your initial conditions as well as outputs.
    cout<<"The meal cost = $ "<<mlCost<<endl;
    cout<<"The Sales tax = $  "<<slsTxD<<endl;
    cout<<"The Tip       = $ "<<tipDol<<endl;
    cout<<"The Total Bill= $"<<totBill<<endl;
    
    //Exit stage right
    return 0;
}

