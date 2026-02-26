#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/ASSIGNSCORE
int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int n ; cin>>n;
        int sum = 0 ;
        for(int i = 0 ; i<n ; i++){
            int x ; cin>>x;
            sum = sum + x;
        }
        int total = 50*(n+1)- sum;
        if(total > 100){
            cout<<-1<<endl;
        }
        else if(total<=0){
            cout<<0<<endl;
        }
        else{
            cout<<total<<endl;
        }
        

    }
      
    return 0;
}