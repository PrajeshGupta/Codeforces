#include<bits/stdc++.h>

#define ll long long
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    while(n>5){
        n-=5;
        count++;
    }
    cout<<count+1;
    return 0;
}