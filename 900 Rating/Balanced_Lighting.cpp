#include <bits/stdc++.h>
using namespace std;

int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n ;
        int red = 0;
        int blue = 0;
        int empty = 0;
        for (int  i = 0; i < n; i++)
        {
            int x ; cin>>x;
            if(x==1) red++;
            else if(x==2) blue++;
            else if(x==0) empty++;
        }
        if(n%2==0){
            if(red<= n/2 && blue<=n/2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
      
    return 0;
}