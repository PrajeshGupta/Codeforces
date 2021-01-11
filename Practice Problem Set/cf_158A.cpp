#include<bits/stdc++.h>

#define foi(n)  for(int i=0;i<n;i++)
using namespace std;


int main(){
    int n,pass,count=0;
    cin>>n>>pass;
    int arr[n];
    foi(n){
        cin>>arr[i];
    }
    foi(n){
        if(arr[i]>=arr[pass-1] && arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
    
}