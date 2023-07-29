#include<iostream>
using namespace std;
int main(){
	int a,b,temp;
	cout<<"enter a:-";
	cin>>a;
	cout<<"enter b:-";
	cin>>b;
	if(a%b==0){
		cout<<b;
	}
	else{
	temp=a%b;
cout<<temp;		
	}
	a=b;
	b=temp;
	return 0;
}
