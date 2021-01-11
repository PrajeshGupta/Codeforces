#include<bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t!=0){
        foi(n){
            if(s[i]=='B'&&s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
        t--;
    }
    cout<<s;
    return 0;
}