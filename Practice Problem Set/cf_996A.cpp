#include <bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=n-1;j>=0;j++)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    while(n!=0){
        if(n>=100){
            n-=100;
            count++;
        }
        else if(n>=20){
            n-=20;
            count++;
        }
        else if(n>=10){
            n-=10;
            count++;
        }
        else if(n>=5){
            n-=5;
            count++;
        }
        else{
            n-=1;
            count++;
        }
    }
    cout<<count;
    return 0;
}
