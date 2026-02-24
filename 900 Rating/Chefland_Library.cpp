#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/BORROWBOOK
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n ;
        vector<int>mx(100001,0);
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            int y; cin>>y;
             mx[y] = max(mx[y],i+1);
            
        }
        for(auto x:mx){
            sum = sum+x;
        }
        cout<<sum<<endl;
        
    }
      
    return 0;
}