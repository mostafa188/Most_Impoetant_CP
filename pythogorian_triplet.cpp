#include <bits/stdc++.h>
using namespace std;
#define nl endl

bool check(int x ,int y,int z){
    int a,b,c;
    a = max(x,max(y,z));

    if(a == x){
        b=y;
        c=z;
    }else if(a ==y){
        b= x;
        c=z;
    }else{
        b=x;
        c=y;
    }

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

    int a,b,c;
    cin >> a>>b>>c ;

    if(check(a,b,c)){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
    
    
    return 0;
}
