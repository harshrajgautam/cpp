#include <iostream>
using namespace std;

int main() {

  int n, ans = 0, rem;
  int odd=0, even=0;

  cout << "Enter an integer: ";
  cin >> n;

  while(n !=  0) {
    rem = n % 10;
    
    if(rem%2 == 0) {
    	even += rem;
	} else {
		odd += rem;
	}
    
    ans = ans*10 + rem;
    n = n / 10;
  }
  
  cout << "Odd sum : " << odd << endl << "Even sum : " << even << endl;

  cout << "Reversed Number = " << ans;

  return 0;
}
