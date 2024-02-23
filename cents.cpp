#include <stdio.h>
#include <iostream>
#include <string>
#include<sstream>
#include "coins.h"
using namespace std;

int CoinQuart(double coin){
    int CoinNumQuarter;
    if(coin>=0.75){
        CoinNumQuarter=3;
    }
    else if(coin<0.75 && coin>=0.5){
        CoinNumQuarter=2;
    }
    else if(coin<0.5 && coin>=0.25){
        CoinNumQuarter=1;
    }
    else if(coin<0.25){
        CoinNumQuarter=0;
    }
    return CoinNumQuarter;
}
int CoinDim(double coin){
    int CoinNumDime;
    if(coin>=0.20){
        CoinNumDime=2;
    }
    else if(coin<0.20 && coin>=0.10){
        CoinNumDime=1;
    }
    else if(coin<0.10){
        CoinNumDime=0;
    }
    return CoinNumDime;
}

int CoinNick(double coin){
    int CoinNumNickel;
    if(coin>=0.05){
        CoinNumNickel=1;
    }
    else if(coin<0.05){
        CoinNumNickel=0;
    }
    return CoinNumNickel;
}

int CoinPenny(float coin){
    int CoinNumPenny;
    if(coin==0){
        CoinNumPenny=0;
    }
    else if(coin==0.01 || coin==0.02){
        CoinNumPenny=(coin*100);
    }
    else{
        CoinNumPenny=(coin*100);
    }
    return CoinNumPenny;
}

void Coins(double coina){
    string CoinNameq="quarters";
    string CoinNamed="dimes";
    string CoinNamen="nickels";
    string CoinNamec="cents";
    int CoinNumq,CoinNumd,CoinNumn,CoinNumc;
    string q,d,n,c;
    
    double remain;
    double m;
    unsigned int i;
    
    CoinNumq=CoinQuart(coina);
    stringstream ss;  
    ss<<CoinNumq;  
    ss>>q; 
    switch(CoinNumq){
        case 0:
            remain=coina;
            q =" ";
            CoinNameq=" ";
        break;
        
        case 1:
            remain=coina-0.25;
            CoinNameq="quarter";
        break;
        
        case 2:
            remain=coina-0.50;
        break;
        
        case 3:
            remain=coina-0.75;
        break;
    }
    
    CoinNumd=CoinDim(remain);
    stringstream ss1;  
    ss1<<CoinNumd;  
    ss1>>d; 
    switch(CoinNumd){
        case 0:
            d=" ";
            CoinNamed=" ";
        break;
        
        case 1:
            remain=remain-0.10;
            CoinNamed="dime";
        break;
        
        case 2:
            remain=remain-0.20;
        break;
    }
    
    CoinNumn=CoinNick(remain);
    stringstream ss2;  
    ss2<<CoinNumn;  
    ss2>>n; 
    switch(CoinNumn){
        case 0:
            n = " ";
            CoinNamen=" ";
        break;
        
        case 1:
            remain=remain-0.05;
            CoinNamen="nickel";
        break;
    }
    
    CoinNumc=CoinPenny(remain);
    stringstream ss3;  
    ss3<<CoinNumc;  
    ss3>>c;
    switch(CoinNumc){
        case 0:
            c = " ";
            CoinNamec=" ";
        break;
        
        case 1:
            CoinNamec="cent";
        break;
        
        default:
            
        break;
    }
    cout << endl;
    cout << coina << "$ can be represented with  ";
    cout << q << " " << CoinNameq << " ";
    cout << d << " " << CoinNamed << " ";
    cout << n << " " << CoinNamen << " ";
    cout << c << " " << CoinNamec << " ";  
} 
