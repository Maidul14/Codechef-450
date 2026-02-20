#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/POPCORN7?tab=ide
int main(){
    int n  ; cin>>n;
    int result = n-100;
    int count = 0;
    while (result>=50)
    {
        count++ ;
        result = result -50;
    }
    cout<<count<<endl;
    return 0;
}