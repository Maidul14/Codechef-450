#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int target = 22;
    for(int i = 0 ; i<5 ; i++){
        cin>>arr[i];
    }  
    for (int  i = 0; i < 5; i++)
    {
       if(arr[i]== target){
        cout<<"Found" ;
        break;
       }
    }
   
    return 0;
}