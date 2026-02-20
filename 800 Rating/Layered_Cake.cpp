#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/LAYERCAKE?tab=ide
int main() {
	int test ; cin>>test;
	while(test--){
	    int n , m ; cin>>n>>m;
	    int arr1[n] , arr2[m];
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr1[i];
	    }
	    for(int j =0 ; j<m ; j++){
	        cin>>arr2[j];
	    }
	    int count =0;
	    for(int i=0 ; i<n ; i++){
	        for (int j= 0; j < m; j++)
            {
                if(arr1[i]>arr2[j]){
                    count++;
                }
            }  
	    }
	    cout<<count<<endl;
	}

}
