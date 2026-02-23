#include <bits/stdc++.h>
using namespace std;

int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n,m ; cin>>n>>m;
        string s1,s2 ; 
        set<char>c1;
        cin>>s1; 
        cin>>s2;
        for(auto s3:s1){
            c1.insert(s3);
        }
        for(auto s4:s2){
            c1.insert(s4);
        }
        if(c1.size()<26){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
      
    return 0;
}