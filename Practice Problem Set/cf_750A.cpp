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
    int n,minutes,count=0;
    cin>>n>>minutes;
    int t=240-minutes,x=5,i=2;
    while((t-x)>=0 && n!=0){
        count++;
        x=x+(i*5);
        i++;
        n--;
    }
    cout<<count;
    return 0;
}
