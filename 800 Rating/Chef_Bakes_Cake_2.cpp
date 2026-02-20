#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/BAKECAKE2?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        int sum =0;
        int arr1[n] , arr2[n];
        for(int i= 0 ; i<n ;i++){
            cin>>arr1[i];
        }
        for(int j=0 ; j<n; j++){
            cin>>arr2[j];
        }
        for(int i=0 ; i<n ; i++){
                if(arr1[i]>arr2[i]){
                sum = sum+(arr1[i]-arr2[i]);
                }
        }
        cout<<sum<<endl;
    }
      
    return 0;
}