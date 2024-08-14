/* I was asked to create a program to generate the number of coins associated with any amount of cents.
For example, the user would input 5 different amounts of cents and my program would display the number of coins 
(quarters, dimes, nickel, penny) needed for every amount */

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include "coins.h"
using namespace std;

/* This function computes and displays the total number of quarters, dimes, nickels, and pennies
contained in a specific dollar amount entered by the user */
void MainCoin(double coin1,double coin2,double coin3,double coin4,double coin5=0){
    Coins(coin1);
    Coins(coin2);
    Coins(coin3);
    Coins(coin4);
    Coins(coin5);
}

int main(){
    double coin1,coin2,coin3,coin4,coin5;
    int CoinNumber;
            cout << "Enter your different amounts"<< endl;
            cin >> coin1;
            cin >> coin2;
            cin >> coin3;
            cin >> coin4;
            cin >> coin5;
            MainCoin(coin1,coin2,coin3,coin4,coin5); 
    
    return 0;
}
