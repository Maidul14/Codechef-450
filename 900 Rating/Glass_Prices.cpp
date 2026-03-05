#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/GLPR
int main(){
    int m , p ; cin>>m>>p;
    int m2 = m*2 ;
    if(m2<p ){
        cout<<"PLASTIC";
    }  
    else{
        cout<<"METAL";
    }
    return 0;
}