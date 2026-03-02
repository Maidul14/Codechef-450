// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int test ; cin>>test ;
//     while (test--)
//     {
//         int n,k  ; cin>>n>>k  ;
//         int total = n*k ;
//         int mn = n*10 ;
//         int mx = n*12 ;
//         if(total>= mn && total<=mx){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
      
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/ORANGES?tab=ide
int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int n,k ; cin>>n>>k; 
        float total = (float) k/n ;
        if(total>=10 && total<= 12){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    // ei problem ta thik chilo amar think just type casting ta vul chilo 
    return 0;
}