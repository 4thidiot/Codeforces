#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total_faces=0;
    string polyhedron;

    for(int i=0;i<n;i++)
    {
        cin>>polyhedron;

        if(polyhedron=="Tetrahedron")
            total_faces+=4;
            
        else if(polyhedron=="Cube")
            total_faces+=6;
            
        else if(polyhedron=="Octahedron")
            total_faces+=8;

        else if(polyhedron=="Dodecahedron")
            total_faces+=12;
        
        else if(polyhedron=="Icosahedron")
            total_faces+=20;
    }

    cout<<total_faces<<"\n";

    return 0;
}
