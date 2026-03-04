#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/DECDISC?tab=ide
int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int n ; cin>>n;
        vector<int>vec(n);
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        int min1= 1000000;
        for (int i = 0; i <n-1; i++)
        {
            int one = vec[i]+ vec[i+1]/2;
            if(min1>one){
                min1=one;
            }
        }
        sort(vec.begin() ,vec.end());
        int min2 = vec[0]+vec[1];
        int res = min(min1,min2);
        cout<<res<<endl;
    }
      
    return 0;
}