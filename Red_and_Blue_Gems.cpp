#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/REDBLUEGEM?tab=ide
int main(){
    int r,b,p,q; cin>>r>>b>>p>>q;
    int r1 = r*p;
    int b2= b*q;
    cout<<max(r1,b2);
    return 0;
}