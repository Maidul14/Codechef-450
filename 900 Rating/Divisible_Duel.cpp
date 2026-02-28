#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/P2209?tab=statement
int main(){
    int test ; cin>>test ;
    while (test--)
    {
       int x , y ; cin>>x>>y;
       int sum1 =0 ;
       int sum2 = 0;
       vector<int>vec;
       for(int i = x ; i<=y ; i++){
            vec.push_back(i);
       }
       vector<int>vec2;
       for(auto z:vec){
        if(z%x==0){
            vec2.push_back(z);
        }
       }
       for(auto a : vec2){
            if(a%2==0) sum1 = sum1+ a;
            else sum2= sum2+a;
       }
       if(sum1>=sum2) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
      
    return 0;
}