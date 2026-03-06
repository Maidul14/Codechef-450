#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/APPROVAL?tab=ide
int main(){
    int test; 
    cin >> test;

    while(test--){
        vector<int>vec(5);
        int total = 0  ;
        for (int  i = 0; i <5; i++)
        {
            cin>>vec[i];
            total = total + vec[i];
        }
        int res = 0 ;
        sort(vec.begin(), vec.end());
        for (int i = 0; i <5 && total<35; i++)
        {
            total = total + (10-vec[i]);
            res = res +100;
        }
        cout<<res<<endl;
        
    }
    return 0;
}