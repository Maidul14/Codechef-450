#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/DIS2SUB?tab=ide
int main(){
      int test ; cin>>test;
      while (test--)
      {
        int n ; cin>>n ;
        int flag = 0;
        vector<int>vec(n);
        for(int i = 0 ; i<n ; i++){
             cin>>vec[i];

        }
        for(int i = 0 ; i<n-1 ; i++){
            set<int>st;
            st.insert(vec[i]);
            st.insert(vec[i+1]);
            if(st.size()==2){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<2<<endl;
        }
        else if(flag==0){
            cout<<-1<<endl;
        }
      }
      
    return 0;
}