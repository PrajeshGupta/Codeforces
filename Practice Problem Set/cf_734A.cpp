#include<bits/stdc++.h>

#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    int size;
    cin>>size;
    string game,result;
    cin>>game;
    sort(game.begin(),game.end());
    int mid = size/2;
    if(game[mid]=='D' && size%2==0 && game[mid-1]=='A') cout<<"Friendship";
    else if(game[mid]=='A') cout<<"Anton";
    else cout<<"Danik";
    return 0;
}