#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    float x,y,z,m,n;
    x=sqrt((b*b)-(4*a*c));
    y = (-1*b)+x;
    z = (-1*b)-x;
    m=y/(2*a);
    n=z/(2*a);
    if(m==0 && n!=0)
        cout << fixed << setprecision(6) << n  << endl;
    else if(m!=0 && n==0)
        cout << fixed << setprecision(6) << m << endl;
    else if(m!=0 && n!=0)
    {
        cout << fixed << setprecision(6) << m ;
        cout << " " << setprecision(0) << n << endl;
    }
    else
        cout << "0" << endl;

}
