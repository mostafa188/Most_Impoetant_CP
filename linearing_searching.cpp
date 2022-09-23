#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int search_this_item_in_ara(int item,int ara[],int size){
       for(int i=0;i<size;i++) if(ara[i] == item) return i;
       return -1;
}
int main(){
       int size;

       cin>> size;

       int ara[size+1];

       for(int i=0;i<size;i++) cin>>ara[i];
       cout<<"Enter item of searching : "<<nl;
       int item;
       cin >> item;

       int ans = search_this_item_in_ara(item,ara,size);

       if(ans != -1){
              cout<<"It is existed in the array at index no "<<ans <<nl;
       }else{
              cout<<item<<" is not found in the array !!"<<nl;
       }
       return 0;
}
