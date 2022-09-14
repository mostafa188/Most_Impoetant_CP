#include<bits/stdc++.h>
#define nl endl
using namespace std;

int count(int ara[],int size,int value){
          int cnt=0;
          for(int i=0;i<size;i++){
                    if(ara[i] == value){
                              cnt++;
                    }
          }
          return cnt;
}

int main(){
          int size,value,cnt=0;
          cout<<"Enter size and Value : ";
          cin >> size >> value;

          int ara[size+1];

          for(int i=0;i<size;i++) cin>>ara[i];

          cnt = count(ara,size,value);
          cout<<value <<" is present at this array : "<<cnt<<nl; 
          
          return 0;
}
