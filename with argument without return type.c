#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int s,n=5;
    s=sum(n);
   
    getch();
}int sum(int n)
{
int i,s=0;
for(i=1;i<=n;i++)
s=s+i;
 printf("sum = %d",s);
}