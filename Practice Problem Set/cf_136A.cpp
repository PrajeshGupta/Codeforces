#include<bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main(){
    int no_of_friends;
    cin>>no_of_friends;
    int to[no_of_friends],by[no_of_friends];
    foi(no_of_friends){
        cin>>to[i];
        by[to[i]-1]=i+1;
    }
    foi(no_of_friends){
        cout<<by[i]<<" ";
    }
    return 0;
}