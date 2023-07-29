/*#include<iostream>
using namespace std;
int main(){
	int n;
	
	int current_number,max;
	cout<<"enter n";
	cin>>n;
	cout<<"current_number";
	cin>>current_number;
		cout<<"max=current_number";
	int count=2;
for( count<= n){
	int current_number;
	cout<<"\nenter current_number";
	cin>>current_number;
 if(current_number>max){
	max=current_number;
	count=count+1;}
	else{
		count=count+1;
	}}

    
	cout<<"max";*/
	#include <stdio.h>
int main(void)
{
    int n;
    int max = 0;
    printf("Enter a number (0 to exit): ");
    scanf("%d", &n);
    while (n != 0)
    {
        if (max < n)
        {
            max = n;
        }
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);
    }
    printf("Max is: %d", max);
}

}
return 0;}
