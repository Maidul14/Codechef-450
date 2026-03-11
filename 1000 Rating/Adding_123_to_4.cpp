#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/ADD1234
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x,y,z; cin>>x>>y>>z;
        int pair = min(x,z)+(y/2);
        cout<<pair<<endl;
    }
    
    return 0;
}