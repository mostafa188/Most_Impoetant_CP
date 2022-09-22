 #include <bits/stdc++.h>
 using namespace std;
 #define nl endl

 int htod(string n){
    int power = 1;
    int ans=0;
    for(int i=n.size()-1;i>=0;i--){
        
        if(n[i]>='A' &&  n[i]<='F'){
            ans += (n[i] -'A'+10)*power;
        }else if(n[i] >= '0' && n[i]<='9'){
             ans += (n[i]-'0')*power;
        }
        power*= 16;
    }
    return ans;

 }
 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.precision(2);
 
     string n;
     cin >> n;
     cout<<htod(n)<<nl;
     
     return 0;
 }
 
