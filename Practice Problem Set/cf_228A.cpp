#include<bits/stdc++.h>

#define ll long long int
#define foi(n)   for(ll i=0;i<n;i++)
#define foj(n)   for(ll j=0;j<n;j++)

using namespace std;


int main(){
    set<ll> s;
    ll x;
    foi(4){
        cin>>x;
        s.insert(x);
    }
    cout<<4-s.size();
    return 0;
}