#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    ll teams,count=0;
    cin>>teams;
    pair<int,int> a[teams] ;
    foi(teams){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    for(ll i=0;i<teams-1;i++){
        for(ll j=i+1;j<teams;j++){
            if(a[i].second==a[j].first) count++;
            if(a[j].second==a[i].first) count++;
        }
    }
    cout<<count;
    return 0;
}