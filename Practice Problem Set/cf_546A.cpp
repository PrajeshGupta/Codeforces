#include<bits/stdc++.h>

using namespace std;

int main(){
    int base,n,total,sum=0;
    cin>>base>>total>>n;
    for(int i=1;i<=n;i++){
        sum+=base*i;
    }
    if(sum<=total)
        cout<<0;
    else
        cout<<(sum-total);
    return 0;
}