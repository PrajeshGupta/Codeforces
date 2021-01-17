#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    ll test;
    cin>>test;
    while(test--){
        ll no_of_candies,count=0;
        cin>>no_of_candies;
        if(no_of_candies<=2){
            count=0;
        }
        else{
            if(no_of_candies%2==0) count=(no_of_candies/2) - 1;
            else count=no_of_candies/2;
        }
        
        cout<<count<<endl;
    }
    return 0;
}