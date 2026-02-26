#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SPC2025Q2
int main() {
	int test ; cin>>test;
	while(test--){
	    int n , ved , varun ; cin>>n>>ved>>varun;
	    int mx = 0 ;
	    int count = 0 ;
	    for(int i = 0 ; i<n ; i++){
	        int x ; cin>>x ;
	        count = count+x;
	        if(x>mx){
	            mx =x;
	        }
	    }
	    int varu = (varun + count)-mx;
	    int ve = mx + ved;
	    if(ve>varu){
	        cout<<"Ved"<<endl;
	    }
	    else if(varu>ve){
	        cout<<"Varun"<<endl;
	    }
	    else if(ve == varu){
	        cout<<"Equal"<<endl;
	    }
	}

}
