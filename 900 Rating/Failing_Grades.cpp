#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FAIL?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        int sum = 0;
        int flag = 1;
        for(int i = 1 ; i<=n ; i++){
            int x ; cin>>x;
            sum = sum + x;
            int total = sum /i;
            if(total<40){
                flag =0;
            }
        }
        if(flag==1){
            cout<<"Yes"<<endl;
        }
        else if(flag==0){
            cout<<"No"<<endl;
        }
       
    }
      
    return 0;
}