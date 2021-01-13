#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)

using namespace std;

int main()
{
    int no_of_magnets,count=0;
    cin>>no_of_magnets;
    
    string mag[no_of_magnets];
    
    foi(no_of_magnets){
        cin>>mag[i];
    }
    
    int check;
    foi(no_of_magnets){
        while(i<no_of_magnets && mag[i]=="10"){
            check=1;
            ++i;
        }
        if(check==1) count++;
   
        while(i<no_of_magnets && mag[i]=="01"){
            check=0;
            ++i;
        }
        if(check==0) count++;
        if(i<no_of_magnets)
            --i;
    }
    cout<<count;
    return 0;
}