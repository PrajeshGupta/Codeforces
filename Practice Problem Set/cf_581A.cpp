#include <bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define foir(n) for(ll i=n-1;i>=0;i--)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int red,blue;
    cin>>red>>blue;
    int mi=min(red,blue) , ma;
    red-=mi;
    blue-=mi;
    if(red==0){
        ma=blue/2;
    }
    else{
        ma=red/2;
    }
    
    cout<<mi<<" "<<ma;
    return 0;
}
