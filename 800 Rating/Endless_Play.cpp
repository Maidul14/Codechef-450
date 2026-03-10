#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SKONG?tab=statement
int main(){
      int x,y ; cin>>x>>y;
      if(x>4){
        int time = x-4;
        cout<<(time*24)+y;
      }
      if(x==4){
        cout<<y;
      }
    return 0;
}