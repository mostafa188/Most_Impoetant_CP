#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

ll reverse_ans(ll ans){
       int kamal = 0;
       while(ans > 0){
              kamal = kamal*10+ans%10;
              ans /= 10;
       }
       return kamal;
}

ll addbinary(ll a,ll b){
       ll ans=0;
       int previous_carry = 0;

       while(a>0 && a>0){
              if(a%2 ==0 && b%2 ==0){
                     ans = ans*10 +previous_carry;
                     previous_carry = 0;
              }
              else if((a%2 == 1 && b%2 ==0 )||(a%2 == 0 && b%2 ==1 )){
                     if(previous_carry == 1){
                            ans = ans*10+0;
                            previous_carry = 1;
                     }else{
                            ans = ans*10+1;
                            previous_carry = 0;
                     }
              }
              else{
                     ans = ans*10+previous_carry;
                     previous_carry = 1;
              }
              a /= 10;
              b /= 10;
       }
       while(a>0){
              if(previous_carry == 1){
                     if(a%2 == 1){
                            ans = ans*10+0;
                            previous_carry = 1;
                     }else{
                            ans = ans*10+0;
                            previous_carry = 1;
                     }
              }else{
                     ans =ans*10+(a%2);
              }

              a /= 10;
       }
       while(b>0){
              if(previous_carry == 1){
                     if(b%2 == 1){
                            ans = ans*10+0;
                            previous_carry = 1;
                     }else{
                            ans = ans*10+0;
                            previous_carry = 1;
                     }
              }else{
                     ans =ans*10+(b%2);
              }

              b /= 10;
       }

       if(previous_carry == 1){
              ans = ans*10 +1;
       }
       ans = reverse_ans(ans);
       return ans;
}
int main(){
       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll a,b;
       cout<<"Enter two binary number :"<<nl;
       cin >>a >>b;
       cout<<addbinary(a,b)<<nl;
       
       return 0;
}
