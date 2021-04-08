#include <bits/stdc++.h>
 
#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=n-1;k>=0;k--)
 
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        foi(n){
            cin>>a[i];
        }
        sort(a,a+n);
        int flag=0;
        foi(n-1){
            if(abs(a[i]-a[i+1])>1){
                flag=1;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}