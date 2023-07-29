#include<iostream>
using namespace std;
int sum(int a, int b);
int substract(int a,int b);
int multiply(int a,int b);
int division(int a,int b);
int main(){
    int a,b;
    cout<<"enter value of a:-";
    cin>>a;
     cout<<"enter value of b:-";
    cin>>b;
    int s=sum(a,b);
    cout<<"sum is ="<<s;
     int c=substract(a,b);
    cout<<"\nsubstract ="<<c;
    int d=multiply(a,b);
    cout<<"\nmultiply ="<<d;
    int e=division(a,b);
    cout<<"\ndivision="<<e;
    return 0;
}
    int substract(int a, int b){
    	int c;
    cout<<"\nenter value of a:-";
    cin>>a;
     cout<<"enter value of b:-";
     cin>>b;
    if(a>b){
    c=a-b;
	}
	else{
		c= b-a;
	}
    return c;
}
int multiply(int a, int b){
    cout<<"\nenter value of a:-";
    cin>>a;
     cout<<"enter value of b:-";
     cin>>b;
     return a*b;}
     
     int division(int a, int b){
    cout<<"\nenter value of a:-";
    cin>>a;
     cout<<"enter value of b:-";
     cin>>b;
    
    return b/a;}
    
int sum(int a,int b){
    return a+b;
}