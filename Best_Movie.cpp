#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/BESTMOVIE
int main(){
    int test ; cin>>test;
    while (test--)
    {
       int n ; cin>>n;
       int num = 1000000000; ;
       for(int i=0 ; i<n ; i++){
         int a,b ; cin>>a>>b;
         if(a>=7){
            num = min(num,b);
         }
       }
       if(num==1000000000){
        cout<<"-1"<<endl;
       }
       else{
        cout<<num<<endl;
       }
    }
      
    return 0;
}