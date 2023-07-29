#include<iostream>
using namespace std;
int main(){
    int n,i=2,f=0;
    cout<<"enter value of n";
    cin>>n;
    for(i=0;i<n;){
    n%i==0;
    if(f=1)
    i=i+1;}
    else if(f=0){
    cout<<"prime number";}
    else{
    cout<<"not prime";}
    return 0;
}
