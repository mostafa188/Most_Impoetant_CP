#include<bits/stdc++.h>
#define nl endl
using namespace std;

bool find(int ara[],int size,int value){
          bool cnt=false;
          for(int i=0;i<size;i++){
                    if(ara[i] == value){
                              cnt=true;
                              break;
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

          cnt = find(ara,size,value);
          if(cnt)
                    cout<<"Exist in the array !!"<<nl;
          else
                    cout<<"Not exist in the array !!"<<nl;
          
          return 0;
}
