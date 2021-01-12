#include<bits/stdc++.h>

#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    int no_of_friends,fence,width=0;
    cin>>no_of_friends>>fence;
    int height[no_of_friends];
    foi(no_of_friends){
        cin>>height[i];
        width = height[i]<=fence? width+1:width+2;
    }
    cout<<width;
    return 0;
}