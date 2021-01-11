#include<bits/stdc++.h>
 
#define foi(n)  for(int i=0;i<n;i++)
using namespace std;
 
int main(){
    int n,x=0;
    char str[3];
    cin>>n;
    while(n--){
        foi(3){
            cin>>str[i];
        }
        if(str[0]=='+'|| str[2]=='+')
            x+=1;
        else
            x-=1;
    }
    cout<<x;
    
    return 0;
}