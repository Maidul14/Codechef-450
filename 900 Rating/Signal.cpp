#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/P2BAR?tab=ide
int main(){
    int test ; cin>>test ; 
   
    while (test--)
    {
        int n ; cin>>n;
        string s ; cin>>s;
        bool zero = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0') zero = true;
            else if(s[i]=='1' && zero) count++;
        }
        cout<<count<<endl;
    }
      
    return 0;
}