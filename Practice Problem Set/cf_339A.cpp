#include<bits/stdc++.h>

#define foi(n)  for(int i=0;i<n;i=i+2)
#define foj(n)  for(int j=0;j<n;j++)
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<char> num;
    foi(str.length()){
        num.push_back(str[i]);
    }
    sort(num.begin(),num.end());
    int j=0;
    foi(str.length()){
        str[i]=num[j];
        str[i+1]='+';
        j++;
    }
    cout<<str;
    return 0;
}