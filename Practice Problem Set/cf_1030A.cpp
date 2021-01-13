#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main()
{   int n,sum=0;
    cin>>n;
    int type[n];
    foi(n){
        cin>>type[i];
        sum+=type[i];
    }
    if(sum>0) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}