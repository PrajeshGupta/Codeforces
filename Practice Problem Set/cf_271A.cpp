#include<bits/stdc++.h>

#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int check(int y){
    set<int> s;
    while(y!=0){
        s.insert(y%10);
        y/=10;
    }
    return (s.size()==4) ? 0  : -1 ;
}

int main(){
    int year;
    cin>>year;
    year++;
    int t=check(year);
    while(t!=0){
        year++;
        t=check(year);
    }
    cout<<year;
    return 0;
}