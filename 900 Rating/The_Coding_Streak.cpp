#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/STREAK
int main() {
	int test ; cin>>test;
	while(test--){
	    int n ; cin>>n;
	    int careent =0;
        int mxstrike=0;
	    for(int i= 0 ; i<n ;  i++){
	       int x ; cin>>x ;
           if(x>=1){
            careent++;
            mxstrike = max(careent,mxstrike);

           }
           else{
            careent=0;
           }
	    }
	    
	    cout<<mxstrike<<endl;
	}

}
