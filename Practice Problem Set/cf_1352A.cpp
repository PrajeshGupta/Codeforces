#include <bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define foir(n) for(ll i=n-1;i>=0;i--)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin>>test;
    while(test--){
        int n,i=1;
        cin>>n;
        vector<int> number;
        while(n!=0){
            int x=pow(10,i++);
            if(n%x!=0){
                number.push_back(n%x);
                n=n-(n%x);
            }
        }
        reverse(number.begin(),number.end());
        cout<<number.size()<<endl;
        for(auto it=number.begin();it!=number.end();it++){
            cout<<*it<<" ";
        }
    }
    return 0;
}
