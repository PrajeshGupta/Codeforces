#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    foi(n){
        cin>>a[i];
    }
    int min=*min_element(a,a+n),max=*max_element(a,a+n),mini,maxi;
    
    foi(n){
        if(a[i]==min)
            mini=i;
    }
    foj(n){
        if(a[j]==max)
            maxi=j;
    }
    if(mini>maxi) cout<<n-mini-1+maxi;
    else cout<<n-mini-1+maxi-1;
    return 0;
}