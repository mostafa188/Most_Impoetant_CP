#include<bits/stdc++.h>
#define nl endl
using namespace std;

void insert_value(int ara[],int &size,int position,int value){
          
          for(int i=size-1;i>=position-1;i--){
                    ara[i+1] = ara[i];
          }
          ara[position-1] = value;
          size = size+1;
}

int main(){
          int size,value,position,ara[1001];

          cout<<"Enter Size Of Array : ";
          cin >> size;
          cout<<"Enter item of array : ";
          for(int i=0;i<size;i++) cin>>ara[i];

          agin:
          cout<<"Enter insert value and Position : ";
          cin>> value>> position;

          if(position <=size){
                    //insert function call 
                    insert_value(ara,size,position,value);

                    cout<<"After insert value : ";
                    for(int i=0;i<size;i++) cout<<ara[i]<<" ";
                    cout<<nl;
          }else{
                    cout<<nl<<"Enter valid position in size of array :( "<<nl;
                    goto agin;
          }

          return 0;
}
