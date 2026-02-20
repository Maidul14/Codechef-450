#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TRAINEVOD
int main() {
	int test ; cin>>test;
	while(test--){
	    int n ; cin>>n ;
	    int old = 0;
	    int even =0;
	    int arr[n];
	    for(int i =0 ; i<n ; i++){
	        cin>>arr[i];
	        if(i%2==0){
	            old = old+arr[i];
	        }
	        else{
	            even= even+arr[i];
	        }
	    }
	    cout<<max(old,even)<<endl;
	}

}
