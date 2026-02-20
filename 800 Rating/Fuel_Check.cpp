#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FUELCHK?tab=ide
int main(){
    int x,y; cin>>x>>y;
    int res= x*y;
    if(res>=100){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}