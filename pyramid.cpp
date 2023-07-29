
#include<iostream>
using namespace std;
int main()
{
  int n= 5 ;
  int i;
  int j;

  for (i = 1; i <= n; i++)
  {
    for (j = i; j <= n; j++)
    {
      cout<<" ";
    }

    for(j=1; j<=i; j++) {
      cout<<" n ",j;
    }

    cout<<"\n";
  }
  cout<<"n";
  return 0;
}
