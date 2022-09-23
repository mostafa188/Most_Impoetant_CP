#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

string decimal_to_hexa(int n){
       string ans = " ";

       ll x = 1;

       while(x<=n)
              x*=16;
       x /= 16;

       while(n > 0){
              int last_digit = n /x;
              n -= last_digit*x;
              x /= 16;

              if(last_digit <= 9){
                     ans += to_string(last_digit);
              }else{
                     char ch = 'A'+(last_digit-10);
                     ans.push_back(ch);
              }
       }
       return ans;

}

int main(){
       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n;

       cin>>n;

       cout<<decimal_to_hexa(n)<<nl;
       
       return 0;
}
