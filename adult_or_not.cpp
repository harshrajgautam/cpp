#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:-";
    cin>>age;
    if(age>18 && age<60){
    cout<<"adult";}
    else if (age==18 && age <18){
    cout<<"not adult";}
    else 
    cout<<"old";
    return 0;
}