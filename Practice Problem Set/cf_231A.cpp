#include<bits/stdc++.h>

#define foi(n)  for(int i=0;i<n;i++)
using namespace std;



int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        int arr[3],sum=0;
        foi(3){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>1)
            count++;
    }
    cout<<count;
    return 0;
}