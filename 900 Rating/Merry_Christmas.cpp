#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/MERRYXMAS?tab=ide
int main(){
    int x ; cin>>x ;
    if(x>=7){
        cout<<3<<endl;
    } 
    else if(x>=3 && x<=6){
        cout<<2;
    }
    else{
        cout<<1;
    }
    return 0;
}