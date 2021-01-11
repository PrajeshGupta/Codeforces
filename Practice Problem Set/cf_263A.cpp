#include<bits/stdc++.h>

#define foi(n)  for(int i=0;i<n;i++)
#define foj(n)  for(int j=0;j<n;j++)
using namespace std;

int main(){
    int arr[5][5],a,b;
    foi(5){
        foj(5){
            cin>>arr[i][j];
        }
    }
    foi(5){
        foj(5){
            if(arr[i][j]==1){
                a=i;
                b=j;
                break;
            }
        }
    }
    int result = abs(a-2) + abs(b-2);
    cout<<result;
}