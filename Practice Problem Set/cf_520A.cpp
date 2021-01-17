#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    ll no_of_alpha;
    cin>>no_of_alpha;
    string s;
    cin>> s;
    set<char> alpha;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    foi(no_of_alpha){
        alpha.insert(s[i]);
    }
    if(alpha.size()==26) cout<<"YES";
    else cout<<"NO";
    return 0;
}