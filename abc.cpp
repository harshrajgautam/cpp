#include<iostream>
using namespace std;
int main(){

         char name;
         int units;
         int amount=0;
         cout<<"enter the name of consumer:";
         cin>>name;
         cout<<"enter the units consumed:";
         cin>>units;
         if(units > 300){
             amount=units*90;
         }
        else if(units <=300 && units > 100 ){
            amount=5000;
            amount=amount+(units-100)*80;
        }
        else if(units <= 100){
            amount=units*50;
        }
        if(amount>30000){
            amount=amount+amount/100*15;
        }
        cout<<"the consumer name is:"<<name<<endl;
        cout<<"the units consumed :"<<units<<endl;
        cout<<"the total amount is :"<<amount<<endl;
        return 0;
}