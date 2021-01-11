#include<bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    ll n,t=0;
    cin>>n;
    while(n!=0){
        if(n%10==4 || n%10==7){
            t++;
        }
        n=n/10;
    }
    if(t==4 || t==7) cout<<"YES";
    else cout<<"NO";
}