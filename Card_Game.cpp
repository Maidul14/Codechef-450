#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CARDGAME1
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ,x ; cin>>n>>x;
        int even = n/2;
        int odd = n-even;
        if(x%2==0){
            cout<<even-1<<endl;
        }
        else {
            cout<<odd-1<<endl;
        }
    }
      
    return 0;
}