#include <bits/stdc++.h>
#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll arr[n];
    foi(n){
        cin>>arr[i];
    }
    int count = 0;
    int max=arr[0];
    int min=arr[0];
    
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            count++;
            max=arr[i];
        }
        else if(min>arr[i]){
            count++;
            min=arr[i];
        }
    }
    cout<<count;
    
    return 0;
}
