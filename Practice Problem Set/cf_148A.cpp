#include<bits/stdc++.h>

#define ll long long int
#define foi(n)   for(ll i=0;i<n;i++)

using namespace std;


int main(){
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    foi(d){
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0) count++; 
    }
    cout<<count;
    
}