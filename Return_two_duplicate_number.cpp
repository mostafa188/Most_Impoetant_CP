#include <bits/stdc++.h>
using namespace std;
#define nl endl

int set_Bit(int n,int position){
    return ((n&(1<<position)) != 0);
}
void two_unique(int arr[],int n){

    int XOR = 0;
    for(int i=0;i<n;i++){
        XOR ^= arr[i];
    }
    int ans1 = XOR;
    int pos=0;
    int set_bit =0;

    while(set_bit != 1){
        set_bit = XOR&1;
        pos++;
        XOR >>=1;
    }

    int ans2=0;
    for(int i=0;i<n;i++){
        if(set_Bit(arr[i],pos-1)){
            ans2 = ans2^arr[i];
        }
    }
/*
8
1 2 3 1 2 3 5 7
-------------------------
  i   return      ans2   |
 1&2    False       0
 2&2     True      2^0=2
 3&2     True      2^3=1
 1&2    False       1
 2&2     True      2^1=3 
 3&2     True      3^3=0
 5&2    False       0
 7&2     True      0^7=7

 complete loop and ans2 is 7 .....
*/

    cout<<ans2<<nl;
    cout<<(ans2^ans1)<<nl;

}
int main()
{
    cout<<"";
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int size;

    cin>>size;

    int arr[size+1];

    for(int i=0;i<size;i++) cin>>arr[i];

    two_unique(arr,size);
    
    return 0;
}
