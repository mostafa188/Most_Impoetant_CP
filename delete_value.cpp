#include<bits/stdc++.h>
#define nl endl
using namespace std;

void delete_value(int ara[],int &size,int value){
          bool cnt=false;
          for(int i=0;i<size-1;i++){
                    if(ara[i] == value){
                              cnt=true;
                              ara[i] = ara[i+1];
                    }if(cnt){
                              ara[i] = ara[i+1];
                    }
          }
          if(ara[size-1] == value || cnt){
                    size = size-1;
          }else if(!cnt){
                    cout<<value<<" is not existed in this arrray !!"<<nl;
          }
}

int main(){
          int size,value,position,ara[1001];

          cout<<"Enter Size Of Array : ";
          cin >> size;
          cout<<"Enter item of array : ";
          for(int i=0;i<size;i++) cin>>ara[i];

          cout<<"Enter delete value and Position : ";
          cin>> value;

          //delete function call 
          delete_value(ara,size,value);

          cout<<"After delete value : ";
          for(int i=0;i<size;i++) cout<<ara[i]<<" ";
          cout<<nl;

          return 0;
}
