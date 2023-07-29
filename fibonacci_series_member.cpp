#include<iostream>
using namespace std;
int main(){
    int n,x,y,z,c;
    cout<<"enter number";
    cin>>n;
    x=0;
    y=1;
    z;
    
        for(c=1;c<=n;c=c+1){
       
        x=y;
        y=z;
        z=x+y;}
        if(x==n){
        	cout<<"\n member of fibonacci series";
		}
		else{
			cout<<"\n   not a member";
		}
    
    return 0;
}

