#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main()
{   int n;
    cin>>n;
    string o={"I hate "},e={"I love "};
    foi(n){
        if(i%2==0) cout<<o;
        else cout<<e;
        if(i+1<n) cout<<"that ";
    }
    cout<<"it";
    return 0;
}