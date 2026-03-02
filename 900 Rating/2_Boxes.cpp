#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BOX2?tab=ide
int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int m,n,k ; cin>>m>>n>>k;
        int val = abs(m-n);
        if((val-k)%2!=0){
            cout<<-1<<endl;
        }
        else{
            cout<<abs(val-k)/2<<endl;
        }
    }
      
    return 0;
}