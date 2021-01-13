#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main()
{   ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2;
    }
    else{
        cout<<-((n/2)+1);
    }
    return 0;
}