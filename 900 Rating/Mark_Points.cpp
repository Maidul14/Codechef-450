#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/MARKP?tab=statement
int main(){
    int test ; cin>>test;
    while (test--)
    {
       int n ; cin>>n;
       string s ; cin>>s;
       bool yes=true;
       for (int i = 0; i < n; i++ )
       {
         if(s[i]=='1'){
            int count =0;
            while (i<n && s[i]=='1')
            {
                count++;
                i++;
            }
            if(count<3){
                yes= false;
                break;
            }
            
         }
       }
       if(yes){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
       
    }
      
    return 0;
}