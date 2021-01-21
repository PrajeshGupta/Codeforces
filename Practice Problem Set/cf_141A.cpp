#include <bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=n-1;j>=0;j++)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2,final;
    cin>>s1>>s2>>final;
    string join=s1+s2;
    sort(join.begin(),join.end());
    sort(final.begin(),final.end());
    int x=join.compare(final);
    if (x==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}