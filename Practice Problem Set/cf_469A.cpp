#include<bits/stdc++.h>

#define ll long long int
#define foi(n)   for(ll i=0;i<n;i++)
#define foj(n)   for(ll j=0;j<n;j++)

using namespace std;


int main(){
    int n,x,k;
    cin>>n;
    set<int> s;
    foi(2){
        cin>>x;
        foj(x){
            cin>>k;
            s.insert(k);
        }
    }
    if(n==s.size()) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    
}