#include<bits/stdc++.h>

#define ll long long int
#define foi(n)   for(ll i=0;i<n;i++)

using namespace std;

char XOR(char p, char q){
    if(p == q){
        return '0';
    } 
    else
        return '1';
}

int main(){
    int i;
    char str1[101];
    char str2[101];
    char output[101];
    scanf("%s",str1);
    scanf("%s",str2);
    for(i = 0; str1[i] != '\0'; i++){
        output[i] = XOR(str1[i],str2[i]);
    }
    output[i]='\0';
    printf("%s\n",output);
    return 0;
}