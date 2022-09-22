#include <bits/stdc++.h>
using namespace std;
#define nl endl

bool check(int ara[]){
    int a,b,c;
    sort(ara,ara+3);
    a= ara[2],b=ara[1],c=ara[0];
    if((a*a) == (b*b+c*c))
        return true;
    else
        return false;
}
int main()
{
    cout<<"";
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int ara[4];
    for (int i = 0; i < 3; ++i)
    {
       cin >>ara[i];
    }

    if(check(ara)){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
    
    
    return 0;
}
