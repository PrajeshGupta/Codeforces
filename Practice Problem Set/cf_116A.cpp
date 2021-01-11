#include<bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main(){
    ll n,sum=0,max=0;
    cin>>n;
    pair<int,int> p[n];
    foi(n){
        cin>>p[i].first>>p[i].second;
        sum=sum-p[i].first+p[i].second;
        if(sum>max){
            max=sum;
        }
    }
    cout<<max;
    return 0;
}