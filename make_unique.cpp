#include<bits/stdc++.h>
#define nl endl
using namespace std;

void unique(int ara[],int &size){
          int cnt=0;
          sort(ara,ara+size);
          for(int i=0;i<size;i++){
                    for(int j=i+1;j<size;j++){
                              if(ara[i] == ara[j]){
                                        for(int k=j;k<size;k++){
                                                  ara[k] = ara[k+1];
                                        }
                                        size --;
                                        j--;
                              }
                    }
          }
}

int main(){
          int size,value,cnt=0;
          cin >> size;

          int ara[size+1];

          for(int i=0;i<size;i++) cin>>ara[i];

          unique(ara,size);

          for(int i=0;i<size;i++) cout<<ara[i]<<" ";
}
