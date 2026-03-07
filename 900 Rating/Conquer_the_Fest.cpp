#include <bits/stdc++.h>
using namespace std;
// problem link : https://www.codechef.com/problems/a
int main(){
    int a,b; cin>>a>>b;
    int res = b*10;
    if(a== res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}