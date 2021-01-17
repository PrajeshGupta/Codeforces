#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=n-1;j>=0;j--)

using namespace std;

int main() {
    string str;
    getline(cin,str);
    int i=0,j=1;
    set<char> s;
    while(str[i]!='}'){
        if(str[i]>=97 && str[i]<123){
            s.insert(str[i]);
        }
        i++;
    }
    cout<<s.size();
    return 0;
}