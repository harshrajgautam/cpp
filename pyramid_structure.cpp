#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int i;
  int j;

  for (i = 5; i >= n; i--)
  {
    for (j = 5; j <= n; j--)
    {
      printf(" ");
    }

    for(j=5; j<=i; j--) {
      cout<<" n ";
    }

    cout<<"\n";
  }
  return 0;
}
