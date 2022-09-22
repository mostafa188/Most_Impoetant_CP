#include <bits/stdc++.h>
using namespace std;
#define nl endl
//.. .. .. 16 8 4 2 1 
int bin_to_decimal(int n){
    int ans = 0;
    int x =1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x*=2;
        n/=10;
    }
    return ans;
}

int main()
{
    cout<<"";
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int n;
    cin>>n;  
    cout<<bin_to_decimal(n)<<nl;
    
    return 0;
}
