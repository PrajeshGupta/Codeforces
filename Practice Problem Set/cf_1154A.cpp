#include <bits/stdc++.h>
#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    ll sum = (x1+x2+x3+x4)/3;
    
    if(sum-x1!=0) cout<<sum-x1<<" ";
    if(sum-x2!=0) cout<<sum-x2<<" ";
    if(sum-x3!=0) cout<<sum-x3<<" ";
    if(sum-x4!=0) cout<<sum-x4<<" ";

    return 0;
}
