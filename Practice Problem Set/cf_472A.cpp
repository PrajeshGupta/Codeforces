#include <bits/stdc++.h>

#define ll long long
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define foir(n) for(ll i=n-1;i>=0;i--)

using namespace std;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n % 2 == 0 || n % 3 == 0)  return false; 
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
   return true; 
} 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int number;
    cin>>number;
    int x=0,com1,com2;
    int z=4;
    while(x!=1){
        bool a=isPrime(z);
        bool b=isPrime(number-z);
        if(a==false && b==false){
            x=1;
            com1=z;
            com2=number-z;
        }
        else{
            z++;
            x=0;
        }
    }
    cout<<com1<<" "<<com2;
    return 0;
}