#include<bits/stdc++.h>
#define nl endl
using namespace std;

void replace_value(int ara[],int size,int position,int value){
          ara[position-1] = value;
}

int main(){
          int size,value,position,ara[1001];

          cout<<"Enter Size Of Array : ";
          cin >> size;
          cout<<"Enter item of array : ";
          for(int i=0;i<size;i++) cin>>ara[i];

          agin:
          cout<<"Enter replace value and Position : ";
          cin>> value>> position;

          if(position < size){
                    //replace function call 
                    replace_value(ara,size,position,value);

                    cout<<"After replace value : ";
                    for(int i=0;i<size;i++) cout<<ara[i]<<" ";
                    cout<<nl;
          }else{
                    cout<<nl<<"Enter valid position in size of array :( "<<nl;
                    goto agin;
          }

          return 0;
}
