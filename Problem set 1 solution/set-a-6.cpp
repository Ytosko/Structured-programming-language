#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    x=n;
    while(n--)
    {
int a,b,c;
cin >> a >> b >> c;
cout << "Case " << abs(n-x) << " : " << a*b + b*c + c*a << endl;
    }
}
