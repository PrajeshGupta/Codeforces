#include<bits/stdc++.h>

using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    transform(str2.begin(),str2.end(),str2.begin(),::toupper);
    if(str1.compare(str2)<0)
        cout<<"-1";
    else if(str1.compare(str2)>0)
        cout<<"1";
    else
        cout<<"0";
    
    return 0;
}