#include <bits/stdc++.h>
#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int diff = abs(b-a);
        int ans;
        if(diff==0){
            ans=0;
        }
        else{
            if(diff%10==0){
                ans=diff/10;
            }
            else{
                ans=diff/10 +1;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
