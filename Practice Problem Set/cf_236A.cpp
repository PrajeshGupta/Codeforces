#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> ss;
    for(int i=0;i<s.length();i++){
        ss.insert(s[i]);
    }
    if(ss.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}