#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalDrink=(k*l)/nl;
    int totalLime=c*d;
    int totalSalt=p/np;
    cout<<min(min(totalDrink,totalLime),totalSalt)/n<<endl;
    return 0;
}
