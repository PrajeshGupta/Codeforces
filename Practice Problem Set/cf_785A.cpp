#include <bits/stdc++.h>

#define ll long long int
#define foi(n)  for(ll i=0;i<n;i++)
#define foj(n)  for(ll j=n-1;j>=0;j--)

#define tetrahedron     4
#define cube            6
#define octahedron      8
#define dodecahedron    12
#define icosahedron     20


using namespace std;

int main() {
    ll no_of_polygon,no_of_faces=0;
    cin>>no_of_polygon;
    string s;
    foi(no_of_polygon){
        cin>>s;
        if(s=="Tetrahedron") no_of_faces+=tetrahedron;
        else if(s=="Cube") no_of_faces+=cube;
        else if(s=="Octahedron") no_of_faces+=octahedron;
        else if(s=="Dodecahedron") no_of_faces+=dodecahedron;
        else no_of_faces+=icosahedron;
    }
    cout<<no_of_faces;
    return 0;
}