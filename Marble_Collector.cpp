#include <bits/stdc++.h>
using namespace std;

int main(){
    int test ; cin>>test;
    while (test--)
    {
       int n , m ; cin>>n>>m;
       set<int>st;
       for (int i = 0; i <n; i++)
       {
        int x ; cin>>x;
        st.insert(x);
       }
       cout<<m-st.size()<<endl;
       
    }
      
    return 0;
}