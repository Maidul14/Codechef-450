#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/GOODSUB7?tab=ide
int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int n ; cin>>n ;
        int arr[n];
        int count = 1; 
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            if((arr[i]%2) != (arr[i-1]%2) ){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}