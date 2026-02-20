#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/RECSQ
int main(){
    int  a,b,s; cin>>a>>b>>s;
    int sq = s*s;
    int trian = a*b;
    if(sq==trian){
        cout<<"Yes";
    } 
    else{
        cout<<"No";
    }
    return 0;
}