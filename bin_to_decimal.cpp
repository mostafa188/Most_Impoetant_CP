 #include <bits/stdc++.h>
 using namespace std;
 #define nl endl

 int bin_to_dec(int n){
    int ans=0,cnt=0;

    while(n>0){
        ans+=((n%10)*pow(2,cnt));
        cnt++;
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
     cin >> n;

     cout<<bin_to_dec(n)<<nl;
     
     return 0;
 }
 
