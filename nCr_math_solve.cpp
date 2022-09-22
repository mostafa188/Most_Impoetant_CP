#include <bits/stdc++.h>
using namespace std;
#define nl endl
//binary coffiecient math nCr = n! / ((n-r)!*r!)
long long facti(int a ){
    long long fact=1;
    for(int i=1;i<=a;i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    cout<<"";
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a,b;
    cin>>a>>b;

    long long ans = facti(a)/(facti(a-b)*facti(b));
    
    cout<<ans<<nl;
    return 0;
}
