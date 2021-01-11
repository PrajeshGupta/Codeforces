#include<bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    string s;
    cin>>s;
    
    int upper=0,lower=0;
    
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        foi(s.size()){
            if(s[i]>=97)
                s[i]=s[i]-32;
        }
    }
    else{
        foi(s.size()){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
    return 0;
}