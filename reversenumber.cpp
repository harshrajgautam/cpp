#include<iostream>
using namespace std;

int reverseNumber(int n) {
    int ans = 0;

    while(n != 0) {
        int digit = n % 10;
        ans = (ans*10) + digit;
        n = n / 10;
    }

    return ans;
}

int main(){













































    
    int num=123;
    int ans=reverseNumber(num);
    cout<<ans;
    return 0;
}