#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FOODBAL?tab=ide
int main(){
    int a,b,c,d ; cin>>a>>b>>c>>d ;
    int first = abs(a-b) ;
    int sec = abs(c-d) ;
    if(first<sec) {
        cout<<"First"<<endl;
    } 
    else if(sec<first){
        cout<<"Second"<<endl;
    }
    else if(first==sec){
        cout<<"Both"<<endl;
    }
    return 0;
}