#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SMLPAL?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x , y ; cin>>x>>y;
        vector<int>vec;
        for(int i = 0 ; i<x/2 ; i++){
            vec.push_back(1);
        }
        for(int i =0 ; i<y/2 ; i++){
            vec.push_back(2);
        }
        for (int i = 0; i <y/2 ; i++)
        {
            vec.push_back(2);
        }
        for(int i = 0 ; i<x/2 ; i++){
            vec.push_back(1);
        }
        for( auto z:vec){
            cout<<z;
        }
        cout<<endl;
    }
      
    return 0;
}