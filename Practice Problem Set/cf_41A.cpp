#include<bits/stdc++.h>

#define ll long long int
#define foi(n) for(ll i=0;i<n;i++)

using namespace std;

int main(){
    string source,end,result;
    cin>>source>>end;
    int t=0,i,j;
    if(source.size()==end.size()){
        for(i=0,j=end.size()-1;i<source.size();i++,j--){
            if(source[i]==end[j]){
                t=0;
            }
            else{
                t=-1;
                break;
            }
        }
    }
    else t=-1;
    result=(t==0)?"YES":"NO";
    cout<<result;
    return 0;
}