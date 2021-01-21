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
    int n,m,x=1;
    cin>>n>>m;
    foi(n){
        if(i%2==0){
            foj(m) cout<<"#";
            cout<<endl;
        }
        else{
            if(i==((4*x) - 3)){
                foj(m-1) cout<<".";
                cout<<"#";
                cout<<endl;
                x++;
            }
            else{
                cout<<"#";
                foj(m-1) cout<<".";
                cout<<endl;
            }
        }
    }
    return 0;
}
