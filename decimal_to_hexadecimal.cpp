#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

ll octal_represent(ll n){
       ll ans=0,x=1;

       while(x<=n) 
              x *=8;

       x /=8;

       while(x >0){
              ll last = n/x;
              n -= last*x;
              x/=8;

              ans=ans*10+last; 
       }
       return ans;
}

int main(){
       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n;

       while(cin >> n)
              cout<<octal_represent(n)<<nl;
       
       return 0;
}
