#include<iostream>
using namespace std;
int main()
{
    int unit,amount;
    cout<<"unit";
    cin>>unit;
    if(unit<=100){
        amount= unit*50;
    }
    else if(unit>100 && unit<=300){
        amount = 5000;
        amount = amount + (unit-100)*80;
    }
    else{
        amount = amount * 90;
    }

    if(amount > 30000) {
        amount = amount + (amount*15)/100;
    }

    if(amount < 5000) {
        amount = 5000;
    }

    cout<<"\nTotal charges = "<<amount/100<<"Rs\n"<<amount%100<<"p";
    return 0;
}
