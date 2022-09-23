#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
int bs(int ara[],int size,int item){
       int f,l,m;
       f = 0;
       l = size - 1;

       while(f<=l){
              m = (l+f)/2;

              if(ara[m] == item) return m;

              if(ara[m] < item ) f= m+1;
              else l = m - 1;
       }
       return -1;
}
int main(){
       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int size,item;

       //size of array
       cin >> size;
       int ara[size+1];

       //element of array
       for(int i=0;i<size;i++) 
              cin >>ara[i];
       
       //searching item
       cin>>item; 

       //sort array
       //call function 
       sort(ara,ara+size);
       int ans = bs(ara,size,item);

       if(ans == -1) 
              cout<<item <<" is not found in the array !!"<<nl;

       else 
              cout<<item <<" is found at index no "<<ans<<nl;


       return 0;
}
