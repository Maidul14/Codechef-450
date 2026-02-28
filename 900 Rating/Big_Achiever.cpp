#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BIG?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n ;
        int arr[n+1];
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int mx= 0;
        for(int i =0 ; i<n ; i++){
            if(arr[i]>mx){
                cout<<1<<" ";
                mx= arr[i];
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
      
    return 0;
}