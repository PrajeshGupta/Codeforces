#include<bits/stdc++.h>

#define ll long long int
#define foi(n)   for(ll i=0;i<n;i++)

using namespace std;


int main(){
    int n,x,i;
    cin>>n;
    long double sum=0;
    for(i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<sum/i;
    
}