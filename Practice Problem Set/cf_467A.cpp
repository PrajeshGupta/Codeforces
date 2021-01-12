#include<bits/stdc++.h>

#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    int no_of_rooms,cap,inn,count=0;
    cin>>no_of_rooms;
    while(no_of_rooms--){
        cin>>inn>>cap;
        if (cap-inn>=2) count++;
    }
    cout<<count;
    return 0;
}