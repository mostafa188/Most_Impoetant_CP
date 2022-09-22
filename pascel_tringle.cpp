#include <bits/stdc++.h>
using namespace std;
#define nl endl

//execution of nCr formula.............
long long facti(int a){
    long long fact=1;
    for(int i=1;i<=a;i++){
        fact *= i;
    }
    return fact;
}

//main formula of nCr .................
int fcount(int i,int j){
    int ans = facti(i)/(facti(i-j)*facti(j));
    return ans;
}

//driver code 
int main()
{
    cout<<"";
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a,b;
    cin>>b;

    for(int i=0;i<=b;i++){
        for(int j=0;j<=i;j++){
            cout<<fcount(i,j)<<" ";
        }
        cout<<nl;
    }
    return 0;
}
