#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n){
       int ans,x,last_digit;
       ans = 0;
       x = 1 ; //unknown i don't know it

       while(x<=n)
              x *= 2;
       x /= 2;

       while(x>0){
              last_digit = n/x;
              n -= last_digit*x;
              x /= 2;

              ans = ans*10 + last_digit;
       }
       return ans;
}
int main(){
       int n;
       cin >> n;

       cout<<decimal_to_binary(n)<<'\n';
       return 0;
}
