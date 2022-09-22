#include <bits/stdc++.h>
using namespace std;
#define nl endl

void fibo(int a){
    int t1 =0,t2 =1;
    int next_term;

    for(int i=1;i<=a;i++){
        cout<<t1<<"  ";
        next_term = t1+t2;
        t1 = t2;
        t2 = next_term;
    }
}

int main()
{
    cout<<"";
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a,b;
    cin>>a;

    fibo(a);
    
    return 0;
}
