#include<iostream>
using namespace std;
int main(){
    int n,x,y,z,c;
    cout<<"enter number";
    cin>>n;
    x=0;
    y=1;
    z=1;
    
        for(c=1;c<=n;c=c+1){
        cout<<"\n"<<z;
        x=y;
        y=z;
        z=x+y;}
    
    return 0;
}
