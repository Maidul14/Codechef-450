#include <bits/stdc++.h>
using namespace std;

int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        string s ; cin>>s;
        int boy =0;
        int girl =0;
        int allow=0 ;
        for (int  i = 0; i < n; i++)
        {
            if(s[i]=='B'){
                boy++;
            }
            if(s[i]=='G'){
                girl++;
            }
            allow++;
            if(boy>girl*2){
                break;
            }
            
        }
        cout<<allow<<endl;
        
    }
      
    return 0;
}
